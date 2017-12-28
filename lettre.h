#ifndef LETTRE_H_INCLUDED
#define LETTRE_H_INCLUDED

class Mot
{
  public:

  Mot(std::string m);
  bool lettreDansMot(char l);

  private:

  std::string mot;
  int longueur;
  int longueur_restante;

};





#endif // LETTRE_H_INCLUDED
