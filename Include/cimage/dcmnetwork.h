#ifndef CLIENTNET_H

int		echoscu_main(int argc, char** argv);

int		findscu_main(int argc, char** argv, void* dcmDatasets);

int		movescu_main(int argc, char** argv);
int		storescu_main(int argc, char** argv);
int		termscu_main(int argc, char** argv);

//Dicom printer server
int		dcmprscp_main(int argc, char** argv);
//print scu
int		dcmprscu_main(int argc, char** argv);
//
int		dcmpsrcv_main(int argc, char** argv);
int		dcmpssnd_main(int argc, char** argv);
int		dcmpmkcrv_main(int argc, char** argv);
int		dcmmklut_main(int argc, char** argv);
int		dcmp2pgm_main(int argc, char** argv);
int		dcmpsmk_main(int argc, char** argv);
int		dcmpsprt_main(int argc, char** argv);
int		dcmpschk_main(int argc, char** argv);
int		tcpprt_main(int argc, char** argv);

LPSTR*   CommandLineToArgvA(LPSTR CmdLine,int* argc);

#endif