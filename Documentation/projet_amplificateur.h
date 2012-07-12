/** \addtogroup amplificateur_piloté_microcontroleur
 * @{
 *
 *	 
 *\defgroup Presentation Présentation du projet
 * @{
 *
 *
 *\page projet_amplificateur Projet amplificateur bidirectionnel  
 *\section intro Introduction
 * Ce document est la documentation du code embarqué sur le microcontrôleur
 * ATxmega128A1 dans le projet de l'amplificateur piloté. \n
 *
 * \section projetinfo Information sur le projet
 * Ce projet a pour objectif de pouvoir piloter à distance un amplificateur optique.
 * Pour pouvoir être piloté à distance le rack devra pouvoir communiquer sur
 * différents moyens de communication, comme Ethernet, GSM, USB. De plus il devra
 * pouvoir communiquer avec un terminal qui utilise SNMP (Simple Network
 * Management Protocol). \n
 *
 * \subpage commande \n
 *
 * \ref amplificateur_piloté_microcontroleur
 * \section deviceinfo Information sur le matériel
 * \subsection microcontroleur Le microcontrôleur
 * Le microcontrôleur utilisé dans ce projet est le ATxmega128A1 de chez Atmel
 * car il possède plus que les 12 ADCs et plus que les 4 DACs nécessaires. De plus
 * il possède un grand nombre de modules de communication.
 * 
 * ATxmega128A1 : \n
 * * <a href=" http://www.atmel.com/devices/ATXMEGA128A1.aspx?tab=parameters ">\link Site du microconctrôleur </a>  \n
 * * <a href="..\datasheet\ATxmega_A1_DOC.pdf">\link ATxmega A1 Documentation </a> \n
 * * <a href="..\datasheet\ATxmega A family DOC.pdf">\link ATxmega A family Documentation </a> \n
 *
 * \subsection autre_carte Les autres cartes
 *	<a href=" ..\datasheet\récapitulatif.xls ">\link Récapitulatif des cartes </a>  \n
 *
 *
 * Date: 28/03/2012 \n
 * \n\n\n\n\n\n\n\n\n
 *\section infodoc Information sur cette documentation
 * Cette documentation a été générée avec \ref Doxywizard \n
 * @}
 */



//-----------------------------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
/* Doxygen documentation page Liste des commandes disponibles ***********************/


/** 
 *\defgroup commande Liste des commandes disponibles
 * @{
 *\page commande Liste des commandes disponibles
 *
 *
 * \section first Demande d'information 
 *
 * \subsection general Demande général
 * \li\c tempPros? --> Demande pour avoir la temperature du microcontrôleur \n 
 * ---> réponse du type : à définir soit en dBm soit en uint\n
 * \li\c *idn? --> Demande pour avoir le numero de série du microcontrôleur\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 *
 *
 *
 * \subsection d_ampl Demande pour un amplificateur double 
 * \li\c dall? --> Demande pour avoir le puissance des 8 photodiodes, la puissance des lasers et les courants de pompe des 2 pompes \n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 * \li\c dph? --> Demande pour avoir le puissance des 8 photodiodes\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 * \li\c dlaser? --> Demande pour avoir la puissance des lasers et les courants de pompe des 2 pompes\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 *
 *
 *
 * \subsection s_ampl Demande pour un amplficateur simple
 * \li\c sall? --> Demande pour avoir le puissance des 4 photodiodes, la puissance du laser et le courant de pompe de la pompe\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 * \li\c sph? --> Demande pour avoir le puissance des 8 photodiodes\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 * \li\c slaser? --> Demande pour avoir la puissance du lasers et le courant de pompe de la pompe\n 
 * ---> réponse du type : à définir soit en dBm soit en uint \n
 *
 *
 * \section second envoi d'information
 * \li\c laser1 suivi par \c \\n puis un nombre de quatre chiffres codé sur 10 bits \n
 * \li\c laser2 suivi par \c \\n puis un nombre de quatre chiffres codé sur 10 bits \n
 * \li\c laser1ON allume le laser 1\n
 * \li\c laser1OFF éteint le laser 1 \n
 * \li\c laser2ON allume le laser 2\n
 * \li\c laser2OFF éteint le laser 2\n
 *
 *
 *
 * \note Tous les caractères sont codés avec la table ASCCI
 *
 *
 * \n\n
 *\section infodoc Information sur cette documentation
 * Cette documentation a été générée avec \ref Doxywizard \n
 *
 *
 * @}
*/

/** \addtogroup amplificateur_piloté_microcontroleur
 * @{
 *
 *	 
 *\defgroup plaqueXmega100 Plaque Xmega100
 * @{
 *
 *
 *\page plaqueXmega100 Plaque Xmega100
 *
 *\section presentationXmega100 Présentation de la carte Xmega100
 * C'est une carte où le microcontrôleur ATxmega128A1 est déjà soudé. \n
 * http://www.lextronic.fr/P22771-platine-xmega100.html 
 *
 *\section caracteristiqueXmega100 Caracteristique de la plaque 
 *
 *\image html carteXmega100.png 
 *\image html Xmega100routage.png
 *
 *
 * \n\n\n\n\n\n\n\n\n
 *\section infodoc Information sur cette documentation
 * Cette documentation a été générée avec \ref Doxywizard \n
 * @}
 */
/** 
 * @}
 */