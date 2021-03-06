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
#include "cyber/examples/common_component_example/common_component_example.h"

#include "cyber/class_loader/class_loader.h"
#include "cyber/component/component.h"

#include <iostream> 
namespace apollo {
bool Abhi_Common_Sample::Init() {
  AINFO << "Commontest component init";
  return true;
}

bool Abhi_Common_Sample::Proc(const std::shared_ptr<perception::PerceptionObstacles>& msg) {
  //AINFO << "Start common component Proc [" << msg->perception_obstacle.id << "]";
  AINFO << "[TEST EXAMPLE] received message";
  std::cout << "[TEST EXAMPLE] received message" << std::endl;
  return true;
}
}
