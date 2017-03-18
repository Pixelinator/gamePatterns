class Vector2f
{
private:
  float x;
  float y;

public:
  Vector2f (arguments);
  virtual ~Vector2f ();
  void setX(float);
  void setY(float);
  float getX();
  float getY();
};

void Vector2f::setX(float value)
{
  x = value;
}

void Vector2f::setY(float value)
{
  y = value;
}

float Vector2f::getX()
{
  return x;
}

float Vector2f::getY()
{
  return y;
}
