#ifndef HMSPLUGIN_H
#define HMSPLUGIN_H
typedef struct{
int		nCmd;
void	*proc;
};
class hmsplugin
{
public:
	hmsplugin(void);
	~hmsplugin(void);
};

#endif
