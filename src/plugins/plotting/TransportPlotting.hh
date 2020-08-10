/*
 * Copyright (C) 2020 Open Source Robotics Foundation
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
 *
*/
#ifndef IGNITION_GUI_PLUGINS_GuiPlotting_HH_
#define IGNITION_GUI_PLUGINS_GuiPlotting_HH_

#include <ignition/gui/Plugin.hh>
#include <ignition/gui/PlottingInterface.hh>

namespace ignition
{
namespace gui
{
namespace plugins
{

class TransportPlotting : public ignition::gui::Plugin
{
  Q_OBJECT

  public: TransportPlotting();
  public: ~TransportPlotting();
  public: void LoadConfig(const tinyxml2::XMLElement *) override;

  public: ignition::gui::PlottingInterface plot;
};

}
}
}
#endif