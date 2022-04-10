/* 
 * QR Code generator library (C++)
 * 
 * Copyright (c) Project semah. (MIT License)
 
 */

#pragma once

#include <array>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>


namespace qrcodegen {


class QrSegment final {
	
	
	public: class Mode final {
		
		/*-- Constants --*/
		
		public: static const Mode NUMERIC;
		public: static const Mode ALPHANUMERIC;
		public: static const Mode BYTE;
		public: static const Mode KANJI;
		public: static const Mode ECI;
		
		
		
		private: int modeBits;
		
		
		private: int numBitsCharCount[3];
		
		
		/*-- Constructor --*/
		
		private: Mode(int mode, int cc0, int cc1, int cc2);
		
		
		/*-- Methods --*/
		
		/* 
		 * (Package-private) Returns the mode indicator bits, which is an unsigned 4-bit value (range 0 to 15).
		 */
		public: int getModeBits() const;
		
		
		public: int numCharCountBits(int ver) const;
		
	};
	
	
	
	
	public: static QrSegment makeBytes(const std::vector<std::uint8_t> &data);
	
	
	/* 
	 * Returns a segment representing the given string of decimal digits encoded in numeric mode.
	 */
	public: static QrSegment makeNumeric(const char *digits);
	
	
	
	public: static QrSegment makeAlphanumeric(const char *text);
	
	
	
	public: static std::vector<QrSegment> makeSegments(const char *text);
	
	
	
	public: static QrSegment makeEci(long assignVal);
	
	
	
	public: static bool isNumeric(const char *text);
	
	
	/* 
	 * Tests whether the given string can be encoded as a segment in alphanumeric mode.
	 * A string is encodable iff each character is in the following set: 0 to 9, A to Z
	 * (uppercase only), space, dollar, percent, asterisk, plus, hyphen, period, slash, colon.
	 */
	public: static bool isAlphanumeric(const char *text);
	
	
	
	/*---- Instance fields ----*/
	
	/* The mode indicator of this segment. Accessed through getMode(). */
	private: const Mode *mode;
	
	/* The length of this segment's unencoded data. Measured in characters for
	 * numeric/alphanumeric/kanji mode, bytes for byte mode, and 0 for ECI mode.
	 * Always zero or positive. Not the same as the data's bit length.
	 * Accessed through getNumChars(). */
	private: int numChars;
	
	/* The data bits of this segment. Accessed through getData(). */
	private: std::vector<bool> data;
	
	
	/*---- Constructors (low level) ----*/
	
	/* 
	 * Creates a new QR Code segment with the given attributes and data.
	 * The character count (numCh) must agree with the mode and the bit buffer length,
	 * but the constraint isn't checked. The given bit buffer is copied and stored.
	 */
	public: QrSegment(const Mode &md, int numCh, const std::vector<bool> &dt);
	
	
	/* 
	 * Creates a new QR Code segment with the given parameters and data.
	 * The character count (numCh) must agree with the mode and the bit buffer length,
	 * but the constraint isn't checked. The given bit buffer is moved and stored.
	 */
	public: QrSegment(const Mode &md, int numCh, std::vector<bool> &&dt);
	
	
	/*---- Methods ----*/
	
	/* 
	 * Returns the mode field of this segment.
	 */
	public: const Mode &getMode() const;
	
	
	/* 
	 * Returns the character count field of this segment.
	 */
	public: int getNumChars() const;
	
	
	/* 
	 * Returns the data bits of this segment.
	 */
	public: const std::vector<bool> &getData() const;
	
	
	// (Package-private) Calculates the number of bits needed to encode the given segments at
	// the given version. Returns a non-negative number if successful. Otherwise returns -1 if a
	// segment has too many characters to fit its length field, or the total bits exceeds INT_MAX.
	public: static int getTotalBits(const std::vector<QrSegment> &segs, int version);
	
	
	/*---- Private constant ----*/
	
	/* The set of all legal characters in alphanumeric mode, where
	 * each character value maps to the index in the string. */
	private: static const char *ALPHANUMERIC_CHARSET;
	
};



/* 
 * A QR Code symbol, which is a type of two-dimension barcode.
 * Invented by Denso Wave and described in the ISO/IEC 18004 standard.
 * Instances of this class represent an immutable square grid of dark and light cells.
 * The class provides static factory functions to create a QR Code from text or binary data.
 * The class covers the QR Code Model 2 specification, supporting all versions (sizes)
 * from 1 to 40, all 4 error correction levels, and 4 character encoding modes.
 * 
 * Ways to create a QR Code object:
 * - High level: Take the payload data and call QrCode::encodeText() or QrCode::encodeBinary().
 * - Mid level: Custom-make the list of segments and call QrCode::encodeSegments().
 * - Low level: Custom-make the array of data codeword bytes (including
 *   segment headers and final padding, excluding error correction codewords),
 *   supply the appropriate version number, and call the QrCode() constructor.
 * (Note that all ways require supplying the desired error correction level.)
 */
class QrCode final {
	
	/*---- Public helper enumeration ----*/
	
	/* 
	 * The error correction level in a QR Code symbol.
	 */
	public: enum class Ecc {
		LOW = 0 ,  
		MEDIUM  ,  
		QUARTILE,  
		HIGH    ,  
	};
	
	
	// Returns a value in the range 0 to 3 (unsigned 2-bit integer).
	private: static int getFormatBits(Ecc ecl);
	
	
	
	/*---- Static factory functions (high level) ----*/
	
	/* 
	 * Returns a QR Code representing the given Unicode text string at the given error correction level.
	 * As a conservative upper bound, this function is guaranteed to succeed for strings that have 2953 or fewer
	 * UTF-8 code units (not Unicode code points) if the low error correction level is used. The smallest possible
	 * QR Code version is automatically chosen for the output. The ECC level of the result may be higher than
	 * the ecl argument if it can be done without increasing the version.
	 */
	public: static QrCode encodeText(const char *text, Ecc ecl);
	
	
	/* 
	 * Returns a QR Code representing the given binary data at the given error correction level.
	 * This function always encodes using the binary segment mode, not any text mode. The maximum number of
	 * bytes allowed is 2953. The smallest possible QR Code version is automatically chosen for the output.
	 * The ECC level of the result may be higher than the ecl argument if it can be done without increasing the version.
	 */
	public: static QrCode encodeBinary(const std::vector<std::uint8_t> &data, Ecc ecl);
	
	
	/*---- Static factory functions (mid level) ----*/
	
	/* 
	 * Returns a QR Code representing the given segments with the given encoding parameters.
	 * The smallest possible QR Code version within the given range is automatically
	 * chosen for the output. Iff boostEcl is true, then the ECC level of the result
	 * may be higher than the ecl argument if it can be done without increasing the
	 * version. The mask number is either between 0 to 7 (inclusive) to force that
	 * mask, or -1 to automatically choose an appropriate mask (which may be slow).
	 * This function allows the user to create a custom sequence of segments that switches
	 * between modes (such as alphanumeric and byte) to encode text in less space.
	 * This is a mid-level API; the high-level API is encodeText() and encodeBinary().
	 */
	public: static QrCode encodeSegments(const std::vector<QrSegment> &segs, Ecc ecl,
		int minVersion=1, int maxVersion=40, int mask=-1, bool boostEcl=true);  // All optional parameters
	
	
	
	/*---- Instance fields ----*/
	
	// Immutable scalar parameters:
	
	/* The version number of this QR Code, which is between 1 and 40 (inclusive).
	 * This determines the size of this barcode. */
	private: int version;
	
	/* The width and height of this QR Code, measured in modules, between
	 * 21 and 177 (inclusive). This is equal to version * 4 + 17. */
	private: int size;
	
	/* The error correction level used in this QR Code. */
	private: Ecc errorCorrectionLevel;
	
	/* The index of the mask pattern used in this QR Code, which is between 0 and 7 (inclusive).
	 * Even if a QR Code is created with automatic masking requested (mask = -1),
	 * the resulting object still has a mask value between 0 and 7. */
	private: int mask;
	
	// Private grids of modules/pixels, with dimensions of size*size:
	
	// The modules of this QR Code (false = light, true = dark).
	// Immutable after constructor finishes. Accessed through getModule().
	private: std::vector<std::vector<bool> > modules;
	
	// Indicates function modules that are not subjected to masking. Discarded when constructor finishes.
	private: std::vector<std::vector<bool> > isFunction;
	
	
	
	/*---- Constructor (low level) ----*/
	
	/* 
	 * Creates a new QR Code with the given version number,
	 * error correction level, data codeword bytes, and mask number.
	 * This is a low-level API that most users should not use directly.
	 * A mid-level API is the encodeSegments() function.
	 */
	public: QrCode(int ver, Ecc ecl, const std::vector<std::uint8_t> &dataCodewords, int msk);
	
	
	
	/*---- Public instance methods ----*/
	
	/* 
	 * Returns this QR Code's version, in the range [1, 40].
	 */
	public: int getVersion() const;
	
	
	/* 
	 * Returns this QR Code's size, in the range [21, 177].
	 */
	public: int getSize() const;
	
	
	/* 
	 * Returns this QR Code's error correction level.
	 */
	public: Ecc getErrorCorrectionLevel() const;
	
	
	/* 
	 * Returns this QR Code's mask, in the range [0, 7].
	 */
	public: int getMask() const;
	
	
	/* 
	 * Returns the color of the module (pixel) at the given coordinates, which is false
	 * for light or true for dark. The top left corner has the coordinates (x=0, y=0).
	 * If the given coordinates are out of bounds, then false (light) is returned.
	 */
	public: bool getModule(int x, int y) const;
	
	
	
	/*---- Private helper methods for constructor: Drawing function modules ----*/
	
	// Reads this object's version field, and draws and marks all function modules.
	private: void drawFunctionPatterns();
	
	 
	private: void drawFormatBits(int msk);
	
	
	// Draws two copies of the version bits (with its own error correction code),
	// based on this object's version field, iff 7 <= version <= 40.
	private: void drawVersion();
	
	
	// Draws a 9*9 finder pattern including the border separator,
	// with the center module at (x, y). Modules can be out of bounds.
	private: void drawFinderPattern(int x, int y);
	
	
	// Draws a 5*5 alignment pattern, with the center module
	// at (x, y). All modules must be in bounds.
	private: void drawAlignmentPattern(int x, int y);
	
	
	// Sets the color of a module and marks it as a function module.
	// Only used by the constructor. Coordinates must be in bounds.
	private: void setFunctionModule(int x, int y, bool isDark);
	
	
	// Returns the color of the module at the given coordinates, which must be in range.
	private: bool module(int x, int y) const;
	
	
	/*---- Private helper methods for constructor: Codewords and masking ----*/
	
	// Returns a new byte string representing the given data with the appropriate error correction
	// codewords appended to it, based on this object's version and error correction level.
	private: std::vector<std::uint8_t> addEccAndInterleave(const std::vector<std::uint8_t> &data) const;
	
	
	// Draws the given sequence of 8-bit codewords (data and error correction) onto the entire
	// data area of this QR Code. Function modules need to be marked off before this is called.
	private: void drawCodewords(const std::vector<std::uint8_t> &data);
	
	
	
	private: void applyMask(int msk);
	
	
	
	private: long getPenaltyScore() const;
	
	
	

	private: std::vector<int> getAlignmentPatternPositions() const;
	
	
	
	private: static int getNumRawDataModules(int ver);
	
	
	// Returns the number of 8-bit data (i.e. not error correction) codewords contained in any
	// QR Code of the given version number and error correction level, with remainder bits discarded.
	// This stateless pure function could be implemented as a (40*4)-cell lookup table.
	private: static int getNumDataCodewords(int ver, Ecc ecl);
	
	
	// Returns a Reed-Solomon ECC generator polynomial for the given degree. This could be
	// implemented as a lookup table over all possible parameter values, instead of as an algorithm.
	private: static std::vector<std::uint8_t> reedSolomonComputeDivisor(int degree);
	
	
	// Returns the Reed-Solomon error correction codeword for the given data and divisor polynomials.
	private: static std::vector<std::uint8_t> reedSolomonComputeRemainder(const std::vector<std::uint8_t> &data, const std::vector<std::uint8_t> &divisor);
	
	
	// Returns the product of the two given field elements modulo GF(2^8/0x11D).
	// All inputs are valid. This could be implemented as a 256*256 lookup table.
	private: static std::uint8_t reedSolomonMultiply(std::uint8_t x, std::uint8_t y);
	
	
	// Can only be called immediately after a light run is added, and
	// returns either 0, 1, or 2. A helper function for getPenaltyScore().
	private: int finderPenaltyCountPatterns(const std::array<int,7> &runHistory) const;
	
	
	// Must be called at the end of a line (row or column) of modules. A helper function for getPenaltyScore().
	private: int finderPenaltyTerminateAndCount(bool currentRunColor, int currentRunLength, std::array<int,7> &runHistory) const;
	
	
	// Pushes the given value to the front and drops the last value. A helper function for getPenaltyScore().
	private: void finderPenaltyAddHistory(int currentRunLength, std::array<int,7> &runHistory) const;
	
	
	// Returns true iff the i'th bit of x is set to 1.
	private: static bool getBit(long x, int i);
	
	
	/*---- Constants and tables ----*/
	
	// The minimum version number supported in the QR Code Model 2 standard.
	public: static constexpr int MIN_VERSION =  1;
	
	
	public: static constexpr int MAX_VERSION = 40;
	
	
	
	private: static const int PENALTY_N1;
	private: static const int PENALTY_N2;
	private: static const int PENALTY_N3;
	private: static const int PENALTY_N4;
	
	
	private: static const std::int8_t ECC_CODEWORDS_PER_BLOCK[4][41];
	private: static const std::int8_t NUM_ERROR_CORRECTION_BLOCKS[4][41];
	
};



/*---- Public exception class ----*/


class data_too_long : public std::length_error {
	
	public: explicit data_too_long(const std::string &msg);
	
};



class BitBuffer final : public std::vector<bool> {
	

	public: BitBuffer();
	
	
	
	
	public: void appendBits(std::uint32_t val, int len);
	
};

}
