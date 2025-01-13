import QtQuick
import QtQuick.Window

Window {
    width: 600
    height: 600
    visible: true
    title: qsTr("7 January 2025 - 13 January")

   Loader
   {
       id: mainLoader
       anchors.fill: parent

       source: "./MainWindow.qml"

       function reload()
       {
           mainLoader.source = "";
           QmlEngine.clearCashe();
           mainLoader.source = "./MainWindow.qml"
       }
   }

   Connections
   {
       target: QmlEngine

       function onReloadUI()
       {
           console.log("Reloading UI");
           mainLoader.reload();
       }
   }
}

