

0. Starting point:
Dynamically creating objects in the core.
Problem: Dependency points from core to volatile part
Violation of OCP / DIP
1.
Isolation of problem (creation of objects) into functions.
Problem: DIP / OCP still violated
2.
Move functions into volatile part and into a new class: SimpleShapeFactory.
Problem: DIP / OCP still violated
3. DIP applied: create interface in core
4. add new simple shape: triangle
Problem: Still need of changing core: application and even worse the interface (communication contract)
because of name-only-dependency
5. introduce string parameter for shape type in order to get rid of name dependency
Problem: Still need for changing application because of menue
6. introduce new method in factory which provides the available shape types

7. Exchange SimpleShapeFactory with AdvancedShapeFactory without the need for change in the core