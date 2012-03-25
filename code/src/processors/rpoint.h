/**
 * rpoint.h
 *
 * Toke Høiland-Jørgensen
 * 2012-03-25
 */

#ifndef RPOINT_H
#define RPOINT_H

class RPoint
{
public:
  RPoint();
  RPoint(int x, int y);
  ~RPoint();

  bool operator<(const RPoint& other) const;
  bool operator>(const RPoint& other) const;
  inline bool operator==(const RPoint& other) const
  {
    return (m_x == other.x() && m_y == other.y());
  }

  int x() const {return m_x;}
  int y() const {return m_y;}

private:
  int m_x;
  int m_y;
};

inline unsigned int qHash(const RPoint &key)
{
  return key.x() ^ key.y();
}

#endif
