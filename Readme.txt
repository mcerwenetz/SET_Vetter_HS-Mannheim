This is a draft for the general structure if tracking projects (or emblab projects in general)

Stefan Hohnstein, July 2016

----------------------------------------------------------------------------------------------

+---+
    |
    +-+documentation
    |   |
    |   +--+architecture    t.b.d
    |   |
    |   +--+papers          (to be) published papers from this project
    |   |
    |   +--+reports         Final Reports, Forms, letters, etc. (e.g. documents for BMBF/VDI/etc.) and generated Codedocumentation
    |   |
    |   +--+requirements    Requirements for the projects 
    |
    +--+embedded            All things embedded (hardware, embedded software, fpga)
    |   |
    |   +--+firmware             
    |   |    |
    |   |    +--+firmware        All software main applications and firmware for embedded systems (including Xilinx SDK projects, no workspaces!!!)
    |   |
    |   |    +--+libs            Like FreeRTOS, LPCopen, lwip, etc.
    |   |    |
    |   |    +--+modules         
    |   |    |
    |   |    +--+sandbox         Use this sandbox for testing
    |   |    |
    |   |    +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
    |   |
    |   +--+fpga
    |   |   |
    |   |   +--+ip          IP Block for RTL modules
    |   |   |
    |   |   +--+libs        t.b.d.
    |   |   |
    |   |   +--+modules     RTL modules
    |   |   |
    |   |   +--+pl          Add Programmable Logic Projects here, each project like in the apps Folder as sub-folder (no Xilinx SDK projects here)
    |   |   |
    |   |   +--+sandbox     Use this sandbox for testing and matlab testings/development
    |   |   |
    |   |   +--+tests       Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
    |   |
    |   +--+hardware
    |       |
    |       +--+datasheets      Any datasheet related to the hardware components, add sub-folder as categories if applicable
    |       |
    |       +--+electrical      e.g. eagle files, each project in separate sub-folder
    |       |
    |       +--+mechanical      e.g. Autodesk Inventor projects, each project in separate sub-folder
    |
    +-+methods              Folder for the Matlab/Python/Deep-Learning guys
    |   |
    |   +--+ ????           TBD
    |
    +-+software             Software related stuff (mostly Qt projects, but also RPi kernel modules, etc.)
        |
        +--+apps            All software main applications (essentially all .pro files with the 'app' TEMPLATE)
        |
        +--+libs            Software projects that are build as static or dynamic libs (.pro files with the 'lib' TEMPLATE)
        |
        +--+modules         Reusable classes, headers, etc. (no project files, only .pri)
        |
        +--+plugin          Qt plugins (dynamic, static and QtQuick plugins)
        |
        +--+qmake           qmake macros to include external libraries (e.g opencv, vtk, etc.)
        |
        +--+qml             QML component collections
        |
        +--+sandbox         Use this sandbox for testing, play around
        |
        +--+tests           Here should only be tests to test modules or apps, e.g. for Qt based applications here should be the automated test projects
