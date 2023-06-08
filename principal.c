#include "data.h"
#include "interface_linux.h"
#include "jeu.h"

echiquier grid;
int joueur = 0;

int main()
{
    init_dessins_pieces(dessin_piece);
    printf("\n\n\n\n\n\n \t\tMETTRE EN PLEIN ECRAN PUIS APPUYER SUR UNE TOUCHE\n");getchar();
    init_jeu(grid);
    for(;;)
    {
    	afficher_grille(grid);
    	if (joueur == 0) 
        {
    	    printf ("Joueur jaune c'est a vous.\nPiece to move?");
    	} 
        else
        {
            printf ("Joueur rouge c'est a vous.\nPiece to move?");
        }
	    deplacer_piece(grid, saisie_deplacement(grid, joueur));
	    if (joueur == 1) 
        {
            joueur = 0;
        }
        else 
        {
            joueur = 1;
        } 
    }
  return 0;
}
