/*
 * Copyright 2019-present tlslookieloo authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <string>
#include <optional>

namespace tlslookieloo
{

typedef struct _TargetItem
{
    std::string name;         // name
    std::string serverHost;   // server-side host
    unsigned int serverPort;  // server-side port
    unsigned int clientPort;  // client-side listen port
    std::string clientCert;   // client-side server cert
    std::string clientKey;    // client-side server key
    std::string recordFile;   // Filename to save recorded messages

    std::optional<std::string> clientAuthCert;
    std::optional<std::string> clientAuthKey;
} TargetItem;

} //namespace
