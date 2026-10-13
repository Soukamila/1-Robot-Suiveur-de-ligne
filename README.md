# 3- BRAS ROBOTIQUE À PLUSIEURS DEGRÉS DE LIBERTÉ
Ceci correspond au 3eme exercice des devoirs 

Formation : Robotique & Intelligence Artificielle — EIC 3.0
Formateur : Carlos Yfrazin
Étudiante : LUMERANT Laisha Mitsouka
Plateforme utilisée : Tinkercad Circuits

1. Présentation du projet
Ce projet consiste à réaliser une simulation d'un système de bras robotique à l'aide d'une carte Arduino Uno et de trois servomoteurs.
L'objectif est de programmer les servomoteurs afin qu'ils atteignent différentes positions angulaires. Ce projet permet de découvrir le fonctionnement des servomoteurs, de comprendre le principe des degrés de liberté et d'apprendre comment un programme peut contrôler les mouvements d'un système robotique.
2. Objectifs du projet
Les objectifs sont les suivants :
•	Réaliser un circuit électronique avec une carte Arduino Uno.
•	Connecter et commander trois servomoteurs.
•	Programmer une séquence de mouvements automatiques.
•	Comprendre le rôle des servomoteurs dans un bras robotique.
•	Identifier les degrés de liberté du modèle étudié.
3. Matériel utilisé
Composant	Quantité	Rôle
Arduino Uno R3	1	Contrôler les servomoteurs
Servomoteurs	3	Produire les mouvements angulaires
Fils de connexion	Plusieurs	Relier les composants
Tinkercad Circuits	1 plateforme	Réaliser et tester la simulation
4. Branchement des composants
Les servomoteurs possèdent trois fils : un fil d'alimentation, un fil de masse et un fil de signal.
Servomoteur	Broche de signal prévue	Fonction représentée
Servomoteur 1	D2	Rotation de la base
Servomoteur 2	D3	Mouvement du bras
Servomoteur 3	D1/TX ou D4	Mouvement d'une pince
Les fils rouges sont reliés au 5V et les fils noirs ou marron au GND de l'Arduino.
Remarque : le numéro utilisé dans le programme doit correspondre à la broche sur laquelle le fil de signal est réellement branché.
5. Fonctionnement du programme
Le programme utilise la bibliothèque Servo.h pour commander les servomoteurs.
Au démarrage, les servomoteurs sont positionnés à environ 90°. Ensuite, le programme leur demande d'atteindre plusieurs positions, avec une pause d'une seconde entre les étapes.
La fonction setup() initialise les connexions des servomoteurs. La fonction loop() répète la séquence de mouvements en continu. La commande write() permet de définir l'angle demandé à chaque servomoteur.
6. Rôle des servomoteurs et degrés de liberté
•	Servomoteur 1 — Base : représente la rotation du bras vers la gauche ou vers la droite.
•	Servomoteur 2 — Bras : représente le mouvement de montée et de descente.
•	Servomoteur 3 — Pince : représente le mécanisme qui pourrait permettre de saisir un objet.
Dans ce modèle simplifié, les trois servomoteurs représentent trois mouvements indépendants potentiels. Ils correspondent donc à trois degrés de liberté si chacun commande une articulation distincte.
Une structure mécanique reliant les articulations serait nécessaire pour obtenir un bras robotique complet.
7. Résultats obtenus
À la fin de cette activité, un circuit comprenant une carte Arduino Uno et trois servomoteurs a été préparé dans Tinkercad Circuits.
Le programme a été conçu pour commander les servomoteurs à différentes positions angulaires, notamment 30°, 45°, 60°, 90°, 120°, 135° et 150°, selon la séquence programmée.
Les résultats visés sont :
•	La réalisation du circuit électronique virtuel.
•	La connexion des trois servomoteurs à l'Arduino.
•	La programmation d'une séquence de positions angulaires.
•	La compréhension du contrôle des mouvements par programmation.
•	L'identification des trois degrés de liberté potentiels du modèle.
Limite : les servomoteurs seuls ne constituent pas un bras robotique mécanique complet. Le montage représente le principe de commande des articulations, mais une structure mécanique supplémentaire est nécessaire pour démontrer concrètement les mouvements d'un bras et d'une pince.
8. Difficultés rencontrées
Pendant la réalisation, il a fallu vérifier les broches de signal des servomoteurs et faire correspondre les connexions au programme Arduino.
Cette étape m'a permis de comprendre l'importance du câblage et de la configuration des broches pour commander correctement plusieurs composants.





