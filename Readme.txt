This is a draft for the general structure if tracking projects (or emblab projects in general)

Stefan Hohnstein, July 2016

----------------------------------------------------------------------------------------------

+--+-+documentation
   |      |
   |      +--+papers          (to be) published papers from this project
   |      |
   |      +--+requirements    t.b.d
   |      |
   |      +--+architecture    t.b.d
   |      |
   |      +--+reports         Final Reports, Forms, letters, etc. (e.g. documents for BMBF/VDI/etc.)
   |      |
   |      +--+thesis          Any thesis or Studienarbeit written based on this project
   |
   |
   +-+hardware
   |      +
   |      +--+datasheets      Any datasheet related to the hardware components, add sub-folder as categories if applicable
   |      |
   |      +--+electrical      e.g. eagle files, each project in separate sub-folder
   |      |
   |      +--+mechanical      e.g. Autodesk Inventor projects, each project in separate sub-folder
   +-+media
   |      +
   |      +--+testData        test oder training data required by this project, BUT only the really needed ones!!! Use Subfolders
   |
   |
   +-+software                Folder contents as described by Timo
          +
          +--+apps            All software main applications and firmware for embedded systems (including Xilinx SDK projects, no workspaces!!!)
          |
          +--+libs
          |
          +--+modules
          |
          +--+pl              Add Programmable Logic Projects here, each project like in the apps Folder as sub-folder (no Xilinx SDK projects here)
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
