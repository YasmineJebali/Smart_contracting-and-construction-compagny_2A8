#include "historique.h"

historique::historique()
{

}
void historique:: save_txt(QString id ,QString type,QString date,QString montant,QString genre)
{
    QFile file ("C:/Users/USER/Downloads/Connexion/historique.txt");
         if (!file.open(QIODevice::WriteOnly|QIODevice::Append | QIODevice::Text))
          qDebug()<<"erreur";
         QTextStream out(&file);
         out << "id: "+id+"\nPrenom: "+type+"\nNom: "+date+"\nSalaire: "+montant+"\n"+genre << "\n";
}
QString historique::imp_hist()
{
    ch="";
       QFile file("C:/Users/USER/Downloads/Connexion/historique.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         ch="";

       QTextStream in(&file);

      while (!in.atEnd()) {

            QString myString = in.readLine();
            ch+=myString+"\n";

      }
      return ch;
}
