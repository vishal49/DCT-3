#include "bits.h"
#include "entier.h"

/*
 * Les fonctions de ce fichier permette d'encoder et de d�coder
 * des entiers en utilisant des codes statiques.
 */

/*
 * Codage d'un entier (entre 0 et 32767 inclus) en une chaine de bits
 * qui est �crite dans le bitstream.
 *
 * Le nombre est cod� par la concat�nation du PREFIXE et SUFFIXE
 * Le suffixe est en fait le nombre entier sauf le premier bit a 1
 * 
 * Nombre de bits |    PR�FIXE     | nombres cod�s | SUFFIXE
 *       0        |       00       |      0        |
 *     	 1        |       010      |  1 (pas 0)    |
 *     	 2        |       011      |     2-3       | 2=0 3=1
 *     	 3        |      1000      |     4-7       | 4=00 5=01 6=10 7=11
 *     	 4        |      1001      |     8-15      | 8=000 ... 15=111
 *     	 5        |      1010      |    16-31      | 16=0000 ... 31=1111
 *     	 6        |      1011      |    32-63      |
 *     	 7        |      11000     |    64-127     |
 *     	 8        |      11001     |   128-255     |
 *     	 9        |      11010     |   256-511     |
 *     	 10       |      11011     |   512-1023    |
 *     	 11       |      11100     |  1024-2047    |
 *     	 12       |      11101     |  2048-4097    |
 *     	 13       |      11110     |  4096-8191    |
 *     	 14       |      111110    |  8192-16383   |
 *     	 15       |      111111    | 16384-32767   |
 *
 * Je vous conseille de faire EXIT si l'entier est trop grand.
 *
 */

static char *prefixes[] = { "00", "010", "011", "1000", "1001", "1010", "1011",
			    "11000", "11001", "11010", "11011", "11100",
			    "11101", "11110", "111110", "111111" } ;

void put_entier(struct bitstream *b, unsigned int f)
{











}

/*
 * Cette fonction fait l'inverse de la pr�c�dente.
 *
 * Un impl�mentation propre, extensible serait d'utiliser
 * un arbre binaire comme pour le d�codage d'Huffman.
 * Ou bien parcourir l'arbre des �tats 8 bits par 8 bits (voir le cours)
 * Mais je ne vous le demande pas
 */

unsigned int get_entier(struct bitstream *b)
{































return 0 ; /* pour enlever un warning du compilateur */
}

/*
 * Operation sur des entiers sign�s
 *
 * Si l'entier est sign�, il est pr�c�d� d'un bit � 1:negatif et 0:positif
 * On consid�re que l'entier 0 est positif donc on pourra ajouter
 * 1 aux nombres n�gatif pour r�cup�rer la place du zero n�gatif.
 *    2 --> 0 2
 *    1 --> 0 1
 *    0 --> 0 0
 *   -1 --> 1 0
 *   -2 --> 1 1
 *   -3 --> 1 2
 *
 */

void put_entier_signe(struct bitstream *b, int i)
{










}
/*
 *
 */
int get_entier_signe(struct bitstream *b)
{




return 0 ; /* pour enlever un warning du compilateur */
}
