////////////////////////////////////////////////////////////////////////////////
/// DISCLAIMER
///
/// Copyright 2017 ArangoDB GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is ArangoDB GmbH, Cologne, Germany
///
/// @author Simon Grätzer
////////////////////////////////////////////////////////////////////////////////

#ifndef ARANGOD_VOC_BASE_API_USERS_H
#define ARANGOD_VOC_BASE_API_USERS_H 1

#include <velocypack/Builder.h>
#include <velocypack/Slice.h>
#include "Basics/Result.h"
#include "Basics/StringRef.h"
#include "VocBase/voc-types.h"

namespace arangodb {
namespace methods {

/// Common code for @arangodb/users and RestUsersHandler
struct Users {
    
private:
  arangodb::Result user(basics::StringRef const& name,
                        VPackBuilder user);
};
}
}

#endif
