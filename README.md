# Rendering Pipeline

<h1 align="center">
  <br>
  <a href="https://jotrocken.blog/"><img src="images/logo.png" alt="OpenGLEngine" width="200"></a>
  <br>
  Moderne Rendering Pipeline
  <br>
</h1>

<h4 align="center">A graphics engine built on top of OpenGL <a href="https://jotrocken.blog/" target="_blank"></a>.</h4>

<p align="center">
  <a href="https://paypal.me/JonasHeinle?locale.x=de_DE">
    <img src="https://img.shields.io/badge/$-donate-ff69b4.svg?maxAge=2592000&amp;style=flat">
  </a>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">Abstract</a>
    </li>
    <li>
      <a href="#about-the-project">Einleitung</a>
    </li>
    <li>
      <a href="#about-the-project">Moderne Rendering Pipeline</a>
      <ul>
        <li><a href="#built-with">Anwendung</a></li>
      </ul>
      <ul>
        <li><a href="#key-features">Geometrie Stufe</a></li>
      </ul>
      <ul>
        <li><a href="#key-features">Rasterisierung</a></li>
      </ul>
      <ul>
        <li><a href="#key-features">Per Fragment Operations</a></li>
      </ul>
      <ul>
        <li><a href="#key-features">Koordinatensysteme</a></li>
      </ul>
      <ul>
        <li><a href="#key-features">Compute Shader</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Unterschied moderne und klassische Rendering-Pipeline</a>
    </li>
    <li>
      <a href="#usage">Ausblick</a>
      <ul>
      <a href="#usage">Raytracing Unterstützung</a>
      </ul>
      <ul>
      <a href="#usage">Task-/Mesh Shaders</a>
      </ul>
    </li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

[![Kataglyphis Engine][product-screenshot]](https://jotrocken.blog/)

In unser heutigen hoch technologisierten Welt steigt stetig und rasant die Leistungsfähigkeit
moderner Grafikhardware. Um heutzutage Grafik auf einem modernen Computer darzustellen
sind mittlerweile eine Vielzahl von Zwischenschritten nötig. Diese Arbeit beschäftigt
sich um die einzelnen Stufen dieser Kette, deren jeweilige Aufgabe, ihren Datentransfer
untereinander, ihre Reihenfolge sowie ihren Arbeitskontext. Beim Arbeitskontext werden
unter anderem die unterschiedlichen Koordinatensysteme untersucht. Dabei soll nicht nur
konkret auf die Arbeitsweise der einzelnen Stufe eingegangen werden, sondern auch im
Speziellen auf die Zusammenarbeit und Kommunikation. Exemplarische Fragestellungen
die behandelt werden sind Folgende: Können in dieser Art der Abarbeitung Flaschenhälse
entstehen und wie werden Sie umgangen bzw. bekämpft. Welchen Einfluss hat der Programmierer
auf die Pipeline bzw. welche Schritte kann er selber implementieren und welche
Schritte werden rein von der Hardware übernommen und können nicht von ihm modifiziert
werden. Diese Arbeit macht den Aufbau einer modernen Rendering-Pipeline verständlich
und vermittelt den Begriff Rasterisierung. Zusätzlich wird es bei dieser Abhandlung, dank
des stetigen technologischen Fortschritts, ein Ausblick auf zukünftige Entwicklungen und
Neuerungen gegeben, die zukünftig moderne Rendering-Pipelines beherrschen wird.


<!-- LICENSE -->
## License

Distributed under the GPL-3.0 License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Jonas Heinle - [@your_twitter](https://twitter.com/Cataglyphis_) - jonasheinle@googlemail.com

Project Link: [https://github.com/Kataglyphis/ProseminarComputergrafik](https://github.com/Kataglyphis/OpenGLEngine)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [OpenGL 4.6](https://www.opengl.org//)


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/jonas-heinle-0b2a301a0/
[product-screenshot]: images/Screenshot.png