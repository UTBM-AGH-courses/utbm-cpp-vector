# Notes de cours

#### Forme canonique de Copien
- ctor par défaut `T()`
- ctor par recopie `T(const &T)`
- destructeur `~T()`
- opérateur d'affectation `&T operator=(const &T)`

#### Méthode `const`
Une méthode peut être `const` si l'on ne modifie pas l'object courrant et si l'on retourne `*this`


#### Utilisation de `iniline`
On peut utiliser `inline` pour les petites méthodes *(dans .h et .cpp)*