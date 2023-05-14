/**
 * @file FilsTransmission.h
 * @author Team OBC (ENSSAT)
 * @brief Fichier contenant le code du fils Transmission
 * @date 2023-04-04
 */

#ifndef FILSTRANSMISSION_H 
#define FILSTRANSMISSION_H

/*! -----------------------------------------------     Les variables du serveur OBC     -----------------------------------------------*/


/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit l'adresse IP du serveur OBC
 * @date 2023-04-03
 */
#define SERVER_OBC_IP "192.168.1.1"

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit le port du serveur OBC
 * @date 2023-04-03
 */
#define SERVER_OBC_PORT 5000

/*! -----------------------------------------------     Les variables des clients     -----------------------------------------------*/

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit l'adresse IP du client Roulis
 * @date 2023-04-03
 */
#define SERVER_ROULIS_IP "192.168.1.2"

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit le port du client Roulis
 * @date 2023-04-03
 */
#define SERVER_ROULIS_PORT 5001

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit l'adresse IP du client Parafoil
 * @date 2023-04-03
 */
#define SERVER_PARAFOIL_IP "192.168.1.3"

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit le port du client Parafoil
 * @date 2023-04-03
 */
#define SERVER_PARAFOIL_PORT 5002

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit l'adresse IP du client Sequenceur
 * @date 2023-04-03
 */
#define SERVER_SEQUECEUR_IP "192.168.1.4"

/**
 * @author Team OBC (ENSSAT)
 * @brief Variable qui définit le port du client Sequenceur
 * @date 2023-04-03
 */
#define SERVER_SEQUECEUR_PORT 5003

/*! -----------------------------------------------     Les fonctions du fils     -----------------------------------------------*/


/**
 * @brief Fonction corps du fils Transmssion
 * 
 * @date 04/04/2023
 * 
 * @author Team OBC (ENSSAT)
 *
 */
void FilsTransmission() ;


#endif