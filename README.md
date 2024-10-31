# 🔄 Convertisseur de Base

Un programme en ligne de commande pour convertir un nombre d'une base numérique à une autre. Il prend en charge les bases de 2 à 36 et vérifie la validité des caractères en fonction de la base d'origine.

---

## 📝 Fonctionnalités

- **🌐 Conversion de Base** : Convertit des nombres de n'importe quelle base entre 2 et 36 vers une autre base.
- **🔍 Validation des Entrées** : Vérifie la validité des caractères selon la base spécifiée pour éviter les erreurs.
- **⚠️ Gestion des Erreurs** : Affiche des messages d'erreur en cas de caractères invalides ou de base incorrecte.

---

## ⚙️ Prérequis

- **Compilateur C** : Un compilateur C comme GCC ou MSVC est nécessaire.

---

## 🚀 Installation

1. **Cloner le dépôt :**
   ```bash
   git clone https://github.com/AnaMkv/Convertisseur-de-bases.git
   cd Convertisseur-de-bases
   ```
2. **Compilez le code**
   ```bash
   gcc main.c -o convertisseur_base -lm
   ```
3. **Exécutez le fichier compilé**
   ```bash
   ./convertisseur_base
   ```

---

# 💻 Utilisation

1. **Exécution** : Lancez le programme depuis le terminal.
2. **Saisie des Détails** :
   - Entrez un nombre et sa base d’origine, par exemple : 1011 2 pour le nombre binaire 1011.
   - Indiquez ensuite la base de destination.
3. **Résultats** : Le nombre est affiché dans la base de destination. Vous pouvez continuer les conversions en suivant les instructions à l’écran.

---

# ⚠️ Limitations

- **Précision** : Le programme ne gère pas les nombres flottants.
- **Pas de Validation Avancée** : Seules les valeurs numériques sont acceptées ; les caractères spéciaux peuvent causer des erreurs.
- **Pas d’Interface Graphique** : Interface en ligne de commande uniquement.

---

# 🤝 Contributions

Les contributions sont bienvenues ! N’hésitez pas à :
- Ouvrir des issues pour signaler des bugs ou proposer des améliorations.
- Soumettre des pull requests pour ajouter des fonctionnalités.

---

# 📄 Licence

Le code est sous licence GPL-v3. Vous pouvez le télécharger, le modifier et le partager librement... tant que vous le faites gratuitement. :)
