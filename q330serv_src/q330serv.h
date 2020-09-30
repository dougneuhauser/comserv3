/*
 * File     :
 *   q330serv.h
 *
 * Purpose  :
 *   Declare subroutines used by q330serv main routine.
 *
 * Author   :
 *   Phil Maechling
 *
 * This program is free software; you can redistribute it and/or modify
 * it with the sole restriction that:
 * You must cause any work that you distribute or publish, that in
 * whole or in part contains or is derived from the Program or any
 * part thereof, to be licensed as a whole at no charge to all third parties.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Modification History:
 *  27 July 2002
 *  2020-09-29 DSN Updated for comserv3.
 */

#ifndef Q330SERV_H
#define Q330SERV_H

void initializeSignalHandlers();
void readOrRereadConfigFile(char *stationcode);
void scan_comserv_clients();
void print_syntax(char *cmdname);
void cleanup(int arg);
void cleanupAndExit(int arg);
void initialize_comserv(csconfig *cs_cfg, char *stationCode);

#endif
