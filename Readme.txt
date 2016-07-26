This is a draft for the general structure if tracking projects (or emblab projects in general)

Stefan Hohnstein, July 2016

----------------------------------------------------------------------------------------------

+--+-+documentation
   |      |
   |      +--+3rdParty          (to be) published papers from this project
   |      |		|
   |      |		+--+papers    paper related to this project
   |      |
   |      +--+architecture    t.b.d
   |      |
   |      +--+papers          (to be) published papers from this project
   |      |
   |      +--+reports         Final Reports, Forms, letters, etc. (e.g. documents for BMBF/VDI/etc.)
   |      |
   |      +--+requirements    t.b.d
   |      |
   |      +--+thesis          Any thesis or Studienarbeit written based on this project
   |
   +-+firmware                Folder contents as described by Timo
   |      +
   |      +--+firmware        All software main applications and firmware for embedded systems (including Xilinx SDK projects, no workspaces!!!)
   |      |
   |      +--+libs		      Like FreeRTOS, LPCopen, lwip, etc.
   |      |
   |      +--+sandbox         Use this sandbox for testing
   |      |
   |      +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
   |
   +-+hardware
   |      +
   |      +--+datasheets      Any datasheet related to the hardware components, add sub-folder as categories if applicable
   |      |
   |      +--+electrical      e.g. eagle files, each project in separate sub-folder
   |      |
   |      +--+fpga
   |	  |	  |
   |	  |	  +--+ip
   |	  |	  |
   |	  |	  +--+libs
   |	  |	  |
   |	  |	  +--+modules
   |	  |	  |
   |	  |	  +--+pl              Add Programmable Logic Projects here, each project like in the apps Folder as sub-folder (no Xilinx SDK projects here)
   |	  |	  |
   |	  |	  +--+sandbox         Use this sandbox for testing and matlab testings/development
   |	  |	  |
   |	  |	  +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
   |	  |
   |      +--+mechanical      e.g. Autodesk Inventor projects, each project in separate sub-folder
   |
   +-+matlab                  Folder contents as described by Timo
   |	  |
   |      +--+codeGen         Scripts for Codegeneration for matlab modules
   |      |
   |      +--+libs
   |	  |
   |      +--+main?			  Main Scripts in subfolders for Matlab "Applications"
   |      |
   |      +--+modules
   |      |
   |      +--+sandbox         Use this sandbox for testing and matlab testings/development
   |      |
   |      +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
   |
   +-+software                Folder contents as described by Timo
          +
          +--+apps            All software main applications and firmware for embedded systems (including Xilinx SDK projects, no workspaces!!!)
          |
          +--+libs
          |
          +--+modules
          |
          +--+plugin
          |
          +--+qmake
          |
          +--+qml
          |
          +--+sandbox         Use this sandbox for testing and matlab testings/development
          |
          +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
