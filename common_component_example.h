/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include <memory>
#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"
#include "modules/perception/proto/perception_obstacle.pb.h"
//#include "cyber/examples/proto/examples.pb.h”//

//using apollo::cyber::examples::proto::Driver;
using apollo::cyber::Component;
using apollo::cyber::ComponentBase;


namespace apollo {
class Abhi_Common_Sample : public Component<perception::PerceptionObstacles> {
 public:
  bool Init() override;
  /**

   * @brief Data callback upon receiving a perception obstacle message.

   * @param Perception obstacle message.

   */

  bool Proc(const std::shared_ptr<perception::PerceptionObstacles>& msg) override;


};

CYBER_REGISTER_COMPONENT(Abhi_Common_Sample)
}