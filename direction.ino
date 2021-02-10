//This file computes the direction for how it moves

// Straight ahead
// All four wheels forward

// Straight backward
// All four wheels backward

straight(int s, int i)
{
  spin(s, i, forwardleft);
  spin(s, i, forwardright);
  spin(s, i, backwardleft);
  spin(s, i, backwardright);
  
}

// Translate Right
// LF forward
// LB backward
// RF backward
// RB forward

// Translate Left
// forwardleft backward
// backwardleft forward
// forwardright forward
// backwardright backward

translate(int s, int i)
{
  // follow convention of x axis or cartesian coordinates 
  // right is positive, left is negative
  if (i = -1)
  {
    spin(s, -1, forwardleft);
    spin(s, 1, forwardright);
    spin(s, 1, backwardleft);
    spin(s, -1, backwardright);    
  }
  else if (i = 1)
  {
    spin(s, 1, forwardleft);
    spin(s, -1, forwardright);
    spin(s, -1, backwardleft);
    spin(s, 1, backwardright); 
    
  }

}
