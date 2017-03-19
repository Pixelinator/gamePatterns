class Observer {
private:
  /* data */

public:
  Observer ();
  virtual ~Observer ();
  virtual void onNotify(const Entity& entity, Event event) = 0;
};
