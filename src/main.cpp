/**
 *  This file is part of gerber2gcode.
 *
 *  gerber2gcode is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gerber2gcode is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gerber2gcode.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "GerberLoader.h"
#include "GcodeGenerator.h"

#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>

int main(){

	GerberLoader gerb;

	gerb.openFile("test.gbr");
	gerb.generateGeometry();

	GcodeGenerator gcode;

	gcode.generateGcode(gerb.getLines());
	gcode.writeData("new.gcode");

}
