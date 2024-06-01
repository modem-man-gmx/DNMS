/***********************************************
  FIR filter designed with
  http://t-filter.appspot.com

  sampling frequency: 44100 Hz

  0 Hz - 400 Hz
  gain = 1
  desired ripple = 1 dB
  actual ripple = 0.5951469174068507 dB

  680 Hz - 22050 Hz
  gain = 0
  desired attenuation = -80 dB
  actual attenuation = -82.03021272680374 dB

************************************************/

#include "./DNMS_def.h"

float32_t dnms_decimate_coeffs_ICS43434[number_FIR_taps_decimation] = 
{
      0.0000471383600320714,
      0.000016301596047241903,
      0.00001901838533262954,
      0.00002195710225532371,
      0.00002511706807628949,
      0.000028496145590866775,
      0.000032089069638904686,
      0.00003588984044233524,
      0.0000398882586848162,
      0.00004407332532949502,
      0.00004842867721961784,
      0.00005293673671602723,
      0.000057577387528762004,
      0.00006232694780664914,
      0.00006716033814356466,
      0.00007204765851524332,
      0.00007695557781724213,
      0.0000818481786403771,
      0.00008668708148137359,
      0.00009143119912596985,
      0.00009603631472288667,
      0.00010045458610489161,
      0.00010463449417502303,
      0.00010852368172993478,
      0.00011206795752171156,
      0.00011520968699385207,
      0.00011788810760819046,
      0.00012004137187003245,
      0.00012160777965420912,
      0.0001225244743510312,
      0.00012272659372754044,
      0.0001221468297613478,
      0.00012072094909544358,
      0.00011838675572903929,
      0.00011507880693041189,
      0.00011073331414765251,
      0.00010529235450621233,
      0.0000986995126784784,
      0.0000908943451829125,
      0.00008182837111951404,
      0.0000714570692209576,
      0.00005972722836360007,
      0.000046611225436764645,
      0.000032066904381567764,
      0.000016072750828967696,
      -0.0000013940225652626149,
      -0.000020346467916179732,
      -0.000040790163037848685,
      -0.00006272508012467977,
      -0.00008613796001944554,
      -0.00011101273959281197,
      -0.00013731807236869398,
      -0.00016501736507133438,
      -0.00019406293577373633,
      -0.0002243941302601069,
      -0.00025594360357272583,
      -0.0002886319682221024,
      -0.0003223687790341295,
      -0.0003570539998984142,
      -0.0003925771918210422,
      -0.0004288162267256607,
      -0.00046563921874648816,
      -0.0005029051233585627,
      -0.0005404613457133949,
      -0.0005781462426394746,
      -0.0006157896038453638,
      -0.0006532120668778607,
      -0.0006902261039838089,
      -0.0007266375141342037,
      -0.0007622452941411238,
      -0.000796841841174669,
      -0.0008302157529142783,
      -0.0008621511285813636,
      -0.0008924291338706002,
      -0.0009208300598690523,
      -0.0009471332242556754,
      -0.0009711176504682137,
      -0.0009925648339082448,
      -0.001011260947128469,
      -0.0010269932539606794,
      -0.0010395561978589656,
      -0.0010487513910028602,
      -0.0010543861479193435,
      -0.0010562820619548525,
      -0.0010542671085905357,
      -0.0010481853628674528,
      -0.0010378932200028534,
      -0.0010232628002609895,
      -0.0010041874466998816,
      -0.0009805662990069583,
      -0.0009523423095557878,
      -0.0009194414471633933,
      -0.0008818512418639634,
      -0.0008395558478016096,
      -0.0007925633470570893,
      -0.0007409205705879145,
      -0.0006846900819976415,
      -0.0006239560160256803,
      -0.0005588354264142083,
      -0.0004894768920879604,
      -0.0004160506030563989,
      -0.00033875215171672577,
      -0.0002578078558236505,
      -0.00017347208052214923,
      -0.00008602478050109694,
      0.000004231572154418817,
      0.00009696947339799503,
      0.00019183383272933886,
      0.0002884430071948419,
      0.0003863920520159775,
      0.00048525472188900806,
      0.0005845839036383074,
      0.0006839144749567095,
      0.0007827649796909485,
      0.0008806407516676106,
      0.0009770360771514139,
      0.0010714339675038983,
      0.001163305056448213,
      0.001252108993529765,
      0.0013373004772826735,
      0.0014183349759653993,
      0.0014946786106369266,
      0.0015658084815352604,
      0.0016312049210033218,
      0.0016903459484639562,
      0.0017427074164863305,
      0.0017877920321473966,
      0.0018251573787866912,
      0.001854399517528259,
      0.0018750611401687398,
      0.0018866479461201967,
      0.001889018703844741,
      0.0018816557670701,
      0.0018643691228286707,
      0.0018368793009498673,
      0.0017989849834250935,
      0.0017505253301582687,
      0.0016913860575621664,
      0.001621504080137037,
      0.0015408643395107974,
      0.0014495075277926029,
      0.0013475267884776282,
      0.0012350725537571754,
      0.0011123535639001648,
      0.000979634363685438,
      0.0008372394477434903,
      0.0006855518586738752,
      0.0005250137998768134,
      0.0003561267613578626,
      0.00017944998864581255,
      -0.000004400943514743695,
      -0.00019475360512155352,
      -0.00039087852726912186,
      -0.0005919935425821721,
      -0.0007972656476525225,
      -0.001005812738219166,
      -0.0012167055115603264,
      -0.0014289702661287903,
      -0.001641593117980651,
      -0.0018535238760436967,
      -0.002063678611613515,
      -0.0022709410375054136,
      -0.0024741709124270986,
      -0.002672207949737096,
      -0.002863872191715818,
      -0.003047971710202813,
      -0.003223310046784998,
      -0.003388687829028146,
      -0.0035429037949452342,
      -0.0036847711998833433,
      -0.003813114934466011,
      -0.003926772213821544,
      -0.0040246168355100795,
      -0.004105538217546315,
      -0.004168471765787286,
      -0.004212386863138347,
      -0.004236301654015142,
      -0.0042392850095192254,
      -0.004220458678811098,
      -0.004179010803211966,
      -0.004114186927264874,
      -0.004025311933180579,
      -0.003911777142700405,
      -0.0037730549359714267,
      -0.0036087025471155157,
      -0.0034183583140872565,
      -0.0032017526114933356,
      -0.002958708164990921,
      -0.0026891402803372265,
      -0.0023930607108727155,
      -0.002070581458518304,
      -0.0017219131243490326,
      -0.0013473654206805994,
      -0.0009473511215214237,
      -0.0005223837402567792,
      -0.00007307703518576995,
      0.00039985441229130716,
      0.0008955961683397391,
      0.001413236499092882,
      0.0019517682768953367,
      0.0025100909134907704,
      0.0030870141544513956,
      0.0036812597295153987,
      0.004291466632764309,
      0.004916196188570418,
      0.005553934828535905,
      0.006203097953230668,
      0.006862036553100437,
      0.007529043812200826,
      0.008202357443914782,
      0.008880169611825346,
      0.009560630702627004,
      0.010241855286570773,
      0.010921934425602707,
      0.011598935302887041,
      0.012270914879455759,
      0.012935921446527705,
      0.013592004259606948,
      0.014237225803734588,
      0.014869645588453741,
      0.015487392964906043,
      0.016088545188732668,
      0.016671317891367683,
      0.017233898809926745,
      0.017774539253017255,
      0.018291578568387264,
      0.018783405115034377,
      0.019248465429425914,
      0.019685290507102115,
      0.020092506400795223,
      0.020468824721053668,
      0.02081304528329175,
      0.02112406593322869,
      0.02140089081770444,
      0.021642635877469618,
      0.02184852601935613,
      0.022017896674842857,
      0.02215019880136337,
      0.022245004187789873,
      0.02230200814821385,
      0.022321029355359717,
      0.02230200814821385,
      0.022245004187789873,
      0.02215019880136337,
      0.022017896674842857,
      0.02184852601935613,
      0.021642635877469618,
      0.02140089081770444,
      0.02112406593322869,
      0.02081304528329175,
      0.020468824721053668,
      0.020092506400795223,
      0.019685290507102115,
      0.019248465429425914,
      0.018783405115034377,
      0.018291578568387264,
      0.017774539253017255,
      0.017233898809926745,
      0.016671317891367683,
      0.016088545188732668,
      0.015487392964906043,
      0.014869645588453741,
      0.014237225803734588,
      0.013592004259606948,
      0.012935921446527705,
      0.012270914879455759,
      0.011598935302887041,
      0.010921934425602707,
      0.010241855286570773,
      0.009560630702627004,
      0.008880169611825346,
      0.008202357443914782,
      0.007529043812200826,
      0.006862036553100437,
      0.006203097953230668,
      0.005553934828535905,
      0.004916196188570418,
      0.004291466632764309,
      0.0036812597295153987,
      0.0030870141544513956,
      0.0025100909134907704,
      0.0019517682768953367,
      0.001413236499092882,
      0.0008955961683397391,
      0.00039985441229130716,
      -0.00007307703518576995,
      -0.0005223837402567792,
      -0.0009473511215214237,
      -0.0013473654206805994,
      -0.0017219131243490326,
      -0.002070581458518304,
      -0.0023930607108727155,
      -0.0026891402803372265,
      -0.002958708164990921,
      -0.0032017526114933356,
      -0.0034183583140872565,
      -0.0036087025471155157,
      -0.0037730549359714267,
      -0.003911777142700405,
      -0.004025311933180579,
      -0.004114186927264874,
      -0.004179010803211966,
      -0.004220458678811098,
      -0.0042392850095192254,
      -0.004236301654015142,
      -0.004212386863138347,
      -0.004168471765787286,
      -0.004105538217546315,
      -0.0040246168355100795,
      -0.003926772213821544,
      -0.003813114934466011,
      -0.0036847711998833433,
      -0.0035429037949452342,
      -0.003388687829028146,
      -0.003223310046784998,
      -0.003047971710202813,
      -0.002863872191715818,
      -0.002672207949737096,
      -0.0024741709124270986,
      -0.0022709410375054136,
      -0.002063678611613515,
      -0.0018535238760436967,
      -0.001641593117980651,
      -0.0014289702661287903,
      -0.0012167055115603264,
      -0.001005812738219166,
      -0.0007972656476525225,
      -0.0005919935425821721,
      -0.00039087852726912186,
      -0.00019475360512155352,
      -0.000004400943514743695,
      0.00017944998864581255,
      0.0003561267613578626,
      0.0005250137998768134,
      0.0006855518586738752,
      0.0008372394477434903,
      0.000979634363685438,
      0.0011123535639001648,
      0.0012350725537571754,
      0.0013475267884776282,
      0.0014495075277926029,
      0.0015408643395107974,
      0.001621504080137037,
      0.0016913860575621664,
      0.0017505253301582687,
      0.0017989849834250935,
      0.0018368793009498673,
      0.0018643691228286707,
      0.0018816557670701,
      0.001889018703844741,
      0.0018866479461201967,
      0.0018750611401687398,
      0.001854399517528259,
      0.0018251573787866912,
      0.0017877920321473966,
      0.0017427074164863305,
      0.0016903459484639562,
      0.0016312049210033218,
      0.0015658084815352604,
      0.0014946786106369266,
      0.0014183349759653993,
      0.0013373004772826735,
      0.001252108993529765,
      0.001163305056448213,
      0.0010714339675038983,
      0.0009770360771514139,
      0.0008806407516676106,
      0.0007827649796909485,
      0.0006839144749567095,
      0.0005845839036383074,
      0.00048525472188900806,
      0.0003863920520159775,
      0.0002884430071948419,
      0.00019183383272933886,
      0.00009696947339799503,
      0.000004231572154418817,
      -0.00008602478050109694,
      -0.00017347208052214923,
      -0.0002578078558236505,
      -0.00033875215171672577,
      -0.0004160506030563989,
      -0.0004894768920879604,
      -0.0005588354264142083,
      -0.0006239560160256803,
      -0.0006846900819976415,
      -0.0007409205705879145,
      -0.0007925633470570893,
      -0.0008395558478016096,
      -0.0008818512418639634,
      -0.0009194414471633933,
      -0.0009523423095557878,
      -0.0009805662990069583,
      -0.0010041874466998816,
      -0.0010232628002609895,
      -0.0010378932200028534,
      -0.0010481853628674528,
      -0.0010542671085905357,
      -0.0010562820619548525,
      -0.0010543861479193435,
      -0.0010487513910028602,
      -0.0010395561978589656,
      -0.0010269932539606794,
      -0.001011260947128469,
      -0.0009925648339082448,
      -0.0009711176504682137,
      -0.0009471332242556754,
      -0.0009208300598690523,
      -0.0008924291338706002,
      -0.0008621511285813636,
      -0.0008302157529142783,
      -0.000796841841174669,
      -0.0007622452941411238,
      -0.0007266375141342037,
      -0.0006902261039838089,
      -0.0006532120668778607,
      -0.0006157896038453638,
      -0.0005781462426394746,
      -0.0005404613457133949,
      -0.0005029051233585627,
      -0.00046563921874648816,
      -0.0004288162267256607,
      -0.0003925771918210422,
      -0.0003570539998984142,
      -0.0003223687790341295,
      -0.0002886319682221024,
      -0.00025594360357272583,
      -0.0002243941302601069,
      -0.00019406293577373633,
      -0.00016501736507133438,
      -0.00013731807236869398,
      -0.00011101273959281197,
      -0.00008613796001944554,
      -0.00006272508012467977,
      -0.000040790163037848685,
      -0.000020346467916179732,
      -0.0000013940225652626149,
      0.000016072750828967696,
      0.000032066904381567764,
      0.000046611225436764645,
      0.00005972722836360007,
      0.0000714570692209576,
      0.00008182837111951404,
      0.0000908943451829125,
      0.0000986995126784784,
      0.00010529235450621233,
      0.00011073331414765251,
      0.00011507880693041189,
      0.00011838675572903929,
      0.00012072094909544358,
      0.0001221468297613478,
      0.00012272659372754044,
      0.0001225244743510312,
      0.00012160777965420912,
      0.00012004137187003245,
      0.00011788810760819046,
      0.00011520968699385207,
      0.00011206795752171156,
      0.00010852368172993478,
      0.00010463449417502303,
      0.00010045458610489161,
      0.00009603631472288667,
      0.00009143119912596985,
      0.00008668708148137359,
      0.0000818481786403771,
      0.00007695557781724213,
      0.00007204765851524332,
      0.00006716033814356466,
      0.00006232694780664914,
      0.000057577387528762004,
      0.00005293673671602723,
      0.00004842867721961784,
      0.00004407332532949502,
      0.0000398882586848162,
      0.00003588984044233524,
      0.000032089069638904686,
      0.000028496145590866775,
      0.00002511706807628949,
      0.00002195710225532371,
      0.00001901838533262954,
      0.000016301596047241903,
      0.0000471383600320714
};
