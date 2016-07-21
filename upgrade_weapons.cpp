/*
 ==============================================================================================================================
 Name        : upgrade_weapons.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Upgrade the weapons for enemyship
 ==============================================================================================================================
 */
 
struct Enemy
{
	int x;
	int y;
	int power;
	Enemy* next_link;
};

Enemy* head = NULL;

Enemy* get_new(Enemy* head)
{
	Enemy* link = new Enemy;
	link->x=0;
	link->y=0;
	link->power=25;
	link->next_link=head;
	head = link;
	return link;
}

void upgradeWeapons(Enemy* ptr)
{
	ptr->power +=10;
}

int main()
{
	bool t = false;
	Enemy* p = new Enemy;
	p = get_new(p);
	cout<<p->power<<endl;
	upgradeWeapons(p);
	cout<<p->power<<endl;
	t = true;
	cout << t <<endl;
	system ("pause");
	return 0;
}
