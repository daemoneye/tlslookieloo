# Copyright 2019-present tlslookieloo authors
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

add_executable(serverside_test
    ${CMAKE_SOURCE_DIR}/src/concretewrapper.cpp
    ${CMAKE_SOURCE_DIR}/src/socketinfo.cpp
    ${CMAKE_SOURCE_DIR}/src/serverside.cpp
    serverside.cpp
)
target_link_libraries(serverside_test
    ${CMAKE_BINARY_DIR}/log4cplus/lib/liblog4cplus.a pthread ssl crypto
)

add_executable(clientside_test
    ${CMAKE_SOURCE_DIR}/src/concretewrapper.cpp
    ${CMAKE_SOURCE_DIR}/src/socketinfo.cpp
    ${CMAKE_SOURCE_DIR}/src/clientside.cpp
    clientside.cpp
)

target_link_libraries(clientside_test
    ${CMAKE_BINARY_DIR}/log4cplus/lib/liblog4cplus.a pthread ssl crypto
)
