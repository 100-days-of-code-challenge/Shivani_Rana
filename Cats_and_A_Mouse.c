Cats and a Mouse
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
___________________________________________________________________



string catAndMouse(int x, int y, int z) {
return (abs(x - z) < abs(y - z)) ? "Cat A" : (abs(x - z) > abs(y - z)) ? "Cat B" : "Mouse C";

}