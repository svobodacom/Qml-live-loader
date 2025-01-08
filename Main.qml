import QtQuick
import Buttons 1.0

Window {
    width: 600
    height: 600
    visible: true
    title: qsTr("7 January 2025")

    CustomButton
    {
        x: 240
        y: 10
    }

    Rectangle
    {
      border.width: 2
      border.color: "black"
      anchors.centerIn: parent
      height:  500
      width: 500

      Image
      {
       anchors.fill: parent
       fillMode: Image.PreserveAspectCrop
       source: "https://img.freepik.com/free-photo/beautiful-creative-lens-ball-photography-swimming-crane-sea_181624-2655.jpg?t=st=1736194231~exp=1736197831~hmac=334858752ce47b8d3e77bfd4c460dafd6e4ecbe17d30b2d170acc1e76f9f774e&w=1480"
      }
    }
}

