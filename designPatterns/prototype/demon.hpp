class Demon : public Monster {
public:
  Demon(int health, int speed)
  : health_(health),
    speed_(speed)
  {}

  virtual Monster* clone()
  {
    return new Demon(health_, speed_);
  }

private:
  int health_;
  int speed_;
};
