Exercice 1 questions
=======

**Que fait le programme ? Compilez, exécutez et testez le programme.**

1. il creer un ConteneurTS avec 5 Item 1, 2, 3, 4, 5. puis nous les afficher. 
   
   ```cpp
   ConteneurTS c;
   initialiser(c);
   for (int i = 0; i < 5; ++i) {
     ecrire(c, i, i + 1);
   }
   afficher(c);
   ```
   
   ce qui donne cette affichage en console ⬇️<img src="file:///C:/Users/SEPT/Desktop/projet/hello-C/periode-B/tp/tp2/out1.png" title="" alt="out1.png" data-align="left">

2.  Puis dans un second temps 
   vérifié que 1 est a la premiere place et 5 a la 5ème
   puis ajouter 10 en premier place et verifié que c'est le cas
   ajouter 11 a la 6ème et la aussi vérifé puis lancer la commande systeme **windows ** "pause" *(j'ai pas windows j'ai un linux ! plus jamais des trucs comme ca svp)*
   
   
   
   ```cpp
   assert(lire(c, 0) == 1);
   assert(lire(c, 4) == 5);
   ecrire(c, 0, 10);
   assert(lire(c, 0) == 10);
   ecrire(c, 5, 11);
   assert(lire(c, 5) == 11);
   
   system("pause"); return 0;
   ```