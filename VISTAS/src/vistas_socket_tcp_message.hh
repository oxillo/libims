/*******************************************************************************
 * Copyright (c) 2018 Airbus Operations S.A.S                                  *
 *                                                                             *
 * This program and the accompanying materials are made available under the    *
 * terms of the Eclipse Public License v. 2.0 which is available at            *
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License   *
 * v. 1.0 which is available at                                                *
 * http://www.eclipse.org/org/documents/edl-v10.php.                           *
 *                                                                             *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause                            *
 *******************************************************************************/

// 
// tcp message socket
// 
#ifndef _VISTAS_SOCKET_TCP_MESSAGE_HH_
#define _VISTAS_SOCKET_TCP_MESSAGE_HH_
#include "vistas_socket.hh"

namespace vistas
{
  class socket_tcp_message;
  typedef shared_ptr<socket_tcp_message> socket_tcp_message_ptr;

  class socket_tcp_message : public socket
  {
  public:
    socket_tcp_message(socket_address_ptr address) MAYTHROWIMSEXCEPTION;

    // Receive from the socket
    uint32_t receive(char* buffer, uint32_t buffer_size, client* client = NULL)
      MAYTHROWIMSEXCEPTION;
    
    // Write to the socket
    void send(const char* buffer, uint32_t size)
      MAYTHROWIMSEXCEPTION;
    
    // Reply to the emmiter : not implemented
    void reply(client& client, const char* buffer, uint32_t size) 
      MAYTHROWIMSEXCEPTION;
    
    // Receive a VISTAS packet from the socket
    uint32_t receive_packet(char* buffer, uint32_t buffer_size)
      MAYTHROWIMSEXCEPTION;
    
    // Set the socket to blocking
    void set_blocking(bool blocking)
      MAYTHROWIMSEXCEPTION;
  };

}
#endif
