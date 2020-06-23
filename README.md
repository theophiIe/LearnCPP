# LearnCPP

## Compiler en C++
Compilation classique d'un programme :
```
g++ nom.cpp -o exe
```
Ou pour chosir une version de compilation faire (exemple avec la version 17) :
```
g++ -std=c++17 nom.cpp -o exe
```
    
Exemple de compilation d'un programme avec des classes :   
```
g++ -std=c++17 *.cpp -o prog
```

## Option de compilation
### Les warning
```
-Wall -Wextra
```

+ -Wpointer-arith : qui affiche des messages si l'on fait des calculs du type pointeur + nombre   
+ -Wcast-qual qui affiche des messages si l'on convertit un pointeur sur une constante en un pointeur sur une variable non constante   
+ -Wcast-align : qui affiche des messages si l'on convertit des pointeurs d'un type à l'autre alors que leur taille en mémoire est différente (par exemple de char* vers int* )   
   
+ -Wconversion : avertit quand des conversions automatiques sont effectuées.   
+ -Wdouble-promotion : avertit quand un float est converti en double.   
+ -Wold-style-cast : avertit quand des conversions « à la C » sont utilisées. En C++, on devrait toujours utiliser des static_cast ou les autres membres de la famille des casts.   
    
+ -Wfloat-equal : avertit si l'on teste l'égalité de deux nombres à virgule. Une erreur courante lorsque l'on fait du calcul scientifique.   
+ -Woverloaded-virtual : affiche un message si une fonction virtuelle n'a pas la même signature dans une classe fille que dans sa classe mère.   
+ -Wshadow : affiche un message s'il y a deux variables de même nom dans la même portion de code.    
+ -Weffc++ : affiche un message si l'on ne suit pas les conseils de Scott Meyers présentés dans son livre Effective C++.   
    
### L'optimisation
```
-O1 -O2 -O3 -Os -Ofast
```

### Debug
```
-g -ggdb
```
