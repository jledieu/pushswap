# pushswap
Projet pushswap 42

(Résumé: Ce projet vous demande de trier des données sur une pile, avec un set
d’instructions limité, en moins de coups possibles. Pour le réussir, vous devrez
manipuler différents algorithmes de tri et choisir la (ou les ?) solution la plus appropriée
pour un classement optimisé des données.)

Pour lancer le programme :
- make
- ./push_swap [2, -2, 5, 1, 24, 59, -244, 576, ...] (Mettez autant de nombre que vous voulez)

Bonus :
- ./push_swap -o : Liste des options
- ./push_swap -c : Couleur
- ./push_swap -a : Change l'algorithme (Pour les listes > 20)
- ./push_swap -l : Voir le resultat final
- ./push_swap -s : Voir toutes les operations
- ./push_swap -n : Voir le nombre d'operations

(Vous pouvez combiner plusieurs options : ./push_swap -c -l 5 2 3 -4 1 24 -255 -564 1024)

(Exemple de trie sur 2000 elements aleatoires : ./push_swap `ruby -e "puts (-1000..1000).to_a.shuffle.join(' ')"`)
