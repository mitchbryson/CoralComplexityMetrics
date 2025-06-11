# Coral Complexity Metrics
A free software tool for computing structural complexity metrics over 3D digital surface models

![](/media/coral_banner.jpg)

## Introduction
"complexitymetrics" is a free command line tool that computes a variety of structural complexity metrics over triangulated surface models of landscapes, constructed for example by using structure from motion. It accepts models in ply format and allows the user to specify regularly spaced square quadrats for which different measurements can be made. The program returns a csv formatted file which contains metrics including mean rugosity, mean and variance of height, mean slope and distribution of slope angles and topographic surface area. The software allows the user to specify a list of measurement scales (spatial resolutions) at which calculations are performed, allowing for the derivation of size-dependant complexity parameters such as fractal dimension.

"complexitymetrics" is released under a GNU General Public Licence that allows you to freely distribute and modify to code to suit your needs (see "LICENCE.txt" for more details).

## Building

Dependancies: cmake, GSL (GNU Scientific Library)

## Running the Tool

TODO.

## Acknowledgements

"CoralComplexityMetrics" was developed by Mitch Bryson, Gus Porter and Will Figueira, in a collaboration between the [Australian Centre for Robotics](https://www.sydney.edu.au/engineering/our-research/robotics-and-intelligent-systems/australian-centre-for-robotics.html) and the [School of Life and Environmental Sciences](https://www.sydney.edu.au/science/schools/school-of-life-and-environmental-sciences.html) at the [University of Sydney](https://www.sydney.edu.au/).

"tinyply" was originally developed Dimitri Diakopoulos ([https://github.com/ddiakopoulos/tinyply](https://github.com/ddiakopoulos/tinyply)) and is used to load/save 3D surface models in [PLY](https://en.wikipedia.org/wiki/PLY_(file_format)) format.
