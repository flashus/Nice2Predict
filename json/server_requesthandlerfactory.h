/*************************************************************************
 * libjson-rpc-cpp
 *************************************************************************
 * @file    requesthandlerfactory.h
 * @date    10/23/2014
 * @author  Peter Spiess-Knafl <peter.knafl@gmail.com>
 * @license See attached LICENSE.txt
 ************************************************************************/

#ifndef JSONRPC_REQUESTHANDLERFACTORY_H
#define JSONRPC_REQUESTHANDLERFACTORY_H

#include "json/server_iprocedureinvokationhandler.h"
#include "json/server_iclientconnectionhandler.h"

namespace jsonrpc {

    typedef enum {JSONRPC_SERVER_V1, JSONRPC_SERVER_V2, JSONRPC_SERVER_V1V2} serverVersion_t;

    class RequestHandlerFactory
    {
        public:
            static IProtocolHandler* createProtocolHandler(serverVersion_t type, IProcedureInvokationHandler& handler);
    };

} // namespace jsonrpc

#endif // JSONRPC_REQUESTHANDLERFACTORY_H
