#include<VocalTractLabApi.h>
int main(int argc,char *argv[])
{
	if(argc>3)
	{
		if(vtlInitialize(argv[1]))return 1;
		if(vtlSegmentSequenceToGesturalScore(argv[2],"1.ges"))return 1;
		if(vtlGesturalScoreToAudio("1.ges",argv[3],0,0,1))return 1;
		vtlClose();
	}
	return 0;
}
