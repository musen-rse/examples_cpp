# Observer Pattern Example

0. starting point: Single Chart -> Data depends on the concrete chart
1. adds BarChart. Data needs to adapt to new chart type.
2. adds Chart interface. Now data only depends on the abstract chart (interface) (DIP)
3. generalisation of the observer pattern:
    - add notifyAll
    - rename chart to observer -> draw() becomes update()
    - extract subject from Data class