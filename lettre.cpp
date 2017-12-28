#include "lettre.h"
#include <string>


Mot::Mot(std::string m)
  {
    mot = m;
    longueur = mot.size()
    longueur_restante = longueur
  }

bool Mot::lettreDansMot(char l)
  {
    for(int i=0; i< longueur_restante; ++i)
    {
      if (l == mot[i])
      {
        return True;
      }

    }
    return False;
  }
