

class IPlatform
{
public:
	virtual ~IPlatform();

	virtual Notify();
};



class Commander 
{
public:
	list<IPlatform*> m_platforms;

public:
	void findEnemy()
	{
		for (auto iter=m_platforms.begin(); iter!=m_platforms.end(); iter++)
		{
			(*iter)->Notify();
		}
	}
};