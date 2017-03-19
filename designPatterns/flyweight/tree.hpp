class Tree
{
private:
  TreeModel* model;
  Vector position;
  double height;
  double thickness;
  Color barkTint;
  Color leafTint;

public:
  Tree ();
  virtual ~Tree ();
};
