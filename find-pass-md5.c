// Max Base
// https://github.com/BaseMax/FindPasswordC/new/master
// Use a implenment of md5
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int passwordi0 = 0;char passwords0[10] = {'0','1','2','3'};int passwordi1 = 100;char passwords1[10] = {'1','2','3','4'};int passwordi2 = 200;char passwords2[10] = {'2','3','4','5'};int passwordi3 = 300;char passwords3[10] = {'3','4','5','6'};int passwordi4 = 400;char passwords4[10] = {'4','5','6','7'};int passwordi5 = 500;char passwords5[10] = {'5','6','7','8'};int passwordi6 = 600;char passwords6[10] = {'6','7','8','9'};int passwordi7 = 700;char passwords7[10] = {'0','1','2','3'};int passwordi8 = 800;char passwords8[10] = {'1','2','3','4'};int passwordi9 = 900;char passwords9[10] = {'2','3','4','5'};int passwordi10 = 1000;char passwords10[10] = {'3','4','5','6'};int passwordi11 = 1100;char passwords11[10] = {'4','5','6','7'};int passwordi12 = 1200;char passwords12[10] = {'5','6','7','8'};int passwordi13 = 1300;char passwords13[10] = {'6','7','8','9'};int passwordi14 = 1400;char passwords14[10] = {'0','1','2','3'};int passwordi15 = 1500;char passwords15[10] = {'1','2','3','4'};int passwordi16 = 1600;char passwords16[10] = {'2','3','4','5'};int passwordi17 = 1700;char passwords17[10] = {'3','4','5','6'};int passwordi18 = 1800;char passwords18[10] = {'4','5','6','7'};int passwordi19 = 1900;char passwords19[10] = {'5','6','7','8'};int passwordi20 = 2000;char passwords20[10] = {'6','7','8','9'};int passwordi21 = 2100;char passwords21[10] = {'0','1','2','3'};int passwordi22 = 2200;char passwords22[10] = {'1','2','3','4'};int passwordi23 = 2300;char passwords23[10] = {'2','3','4','5'};int passwordi24 = 2400;char passwords24[10] = {'3','4','5','6'};int passwordi25 = 2500;char passwords25[10] = {'4','5','6','7'};int passwordi26 = 2600;char passwords26[10] = {'5','6','7','8'};int passwordi27 = 2700;char passwords27[10] = {'6','7','8','9'};int passwordi28 = 2800;char passwords28[10] = {'0','1','2','3'};int passwordi29 = 2900;char passwords29[10] = {'1','2','3','4'};int passwordi30 = 3000;char passwords30[10] = {'2','3','4','5'};int passwordi31 = 3100;char passwords31[10] = {'3','4','5','6'};int passwordi32 = 3200;char passwords32[10] = {'4','5','6','7'};int passwordi33 = 3300;char passwords33[10] = {'5','6','7','8'};int passwordi34 = 3400;char passwords34[10] = {'6','7','8','9'};int passwordi35 = 3500;char passwords35[10] = {'0','1','2','3'};int passwordi36 = 3600;char passwords36[10] = {'1','2','3','4'};int passwordi37 = 3700;char passwords37[10] = {'2','3','4','5'};int passwordi38 = 3800;char passwords38[10] = {'3','4','5','6'};int passwordi39 = 3900;char passwords39[10] = {'4','5','6','7'};int passwordi40 = 4000;char passwords40[10] = {'5','6','7','8'};int passwordi41 = 4100;char passwords41[10] = {'6','7','8','9'};int passwordi42 = 4200;char passwords42[10] = {'0','1','2','3'};int passwordi43 = 4300;char passwords43[10] = {'1','2','3','4'};int passwordi44 = 4400;char passwords44[10] = {'2','3','4','5'};int passwordi45 = 4500;char passwords45[10] = {'3','4','5','6'};int passwordi46 = 4600;char passwords46[10] = {'4','5','6','7'};int passwordi47 = 4700;char passwords47[10] = {'5','6','7','8'};int passwordi48 = 4800;char passwords48[10] = {'6','7','8','9'};int passwordi49 = 4900;char passwords49[10] = {'0','1','2','3'};int passwordi50 = 5000;char passwords50[10] = {'1','2','3','4'};int passwordi51 = 5100;char passwords51[10] = {'2','3','4','5'};int passwordi52 = 5200;char passwords52[10] = {'3','4','5','6'};int passwordi53 = 5300;char passwords53[10] = {'4','5','6','7'};int passwordi54 = 5400;char passwords54[10] = {'5','6','7','8'};int passwordi55 = 5500;char passwords55[10] = {'6','7','8','9'};int passwordi56 = 5600;char passwords56[10] = {'0','1','2','3'};int passwordi57 = 5700;char passwords57[10] = {'1','2','3','4'};int passwordi58 = 5800;char passwords58[10] = {'2','3','4','5'};int passwordi59 = 5900;char passwords59[10] = {'3','4','5','6'};int passwordi60 = 6000;char passwords60[10] = {'4','5','6','7'};int passwordi61 = 6100;char passwords61[10] = {'5','6','7','8'};int passwordi62 = 6200;char passwords62[10] = {'6','7','8','9'};int passwordi63 = 6300;char passwords63[10] = {'0','1','2','3'};int passwordi64 = 6400;char passwords64[10] = {'1','2','3','4'};int passwordi65 = 6500;char passwords65[10] = {'2','3','4','5'};int passwordi66 = 6600;char passwords66[10] = {'3','4','5','6'};int passwordi67 = 6700;char passwords67[10] = {'4','5','6','7'};int passwordi68 = 6800;char passwords68[10] = {'5','6','7','8'};int passwordi69 = 6900;char passwords69[10] = {'6','7','8','9'};int passwordi70 = 7000;char passwords70[10] = {'0','1','2','3'};int passwordi71 = 7100;char passwords71[10] = {'1','2','3','4'};int passwordi72 = 7200;char passwords72[10] = {'2','3','4','5'};int passwordi73 = 7300;char passwords73[10] = {'3','4','5','6'};int passwordi74 = 7400;char passwords74[10] = {'4','5','6','7'};int passwordi75 = 7500;char passwords75[10] = {'5','6','7','8'};int passwordi76 = 7600;char passwords76[10] = {'6','7','8','9'};int passwordi77 = 7700;char passwords77[10] = {'0','1','2','3'};int passwordi78 = 7800;char passwords78[10] = {'1','2','3','4'};int passwordi79 = 7900;char passwords79[10] = {'2','3','4','5'};int passwordi80 = 8000;char passwords80[10] = {'3','4','5','6'};int passwordi81 = 8100;char passwords81[10] = {'4','5','6','7'};int passwordi82 = 8200;char passwords82[10] = {'5','6','7','8'};int passwordi83 = 8300;char passwords83[10] = {'6','7','8','9'};int passwordi84 = 8400;char passwords84[10] = {'0','1','2','3'};int passwordi85 = 8500;char passwords85[10] = {'1','2','3','4'};int passwordi86 = 8600;char passwords86[10] = {'2','3','4','5'};int passwordi87 = 8700;char passwords87[10] = {'3','4','5','6'};int passwordi88 = 8800;char passwords88[10] = {'4','5','6','7'};int passwordi89 = 8900;char passwords89[10] = {'5','6','7','8'};int passwordi90 = 9000;char passwords90[10] = {'6','7','8','9'};int passwordi91 = 9100;char passwords91[10] = {'0','1','2','3'};int passwordi92 = 9200;char passwords92[10] = {'1','2','3','4'};int passwordi93 = 9300;char passwords93[10] = {'2','3','4','5'};int passwordi94 = 9400;char passwords94[10] = {'3','4','5','6'};int passwordi95 = 9500;char passwords95[10] = {'4','5','6','7'};int passwordi96 = 9600;char passwords96[10] = {'5','6','7','8'};int passwordi97 = 9700;char passwords97[10] = {'6','7','8','9'};int passwordi98 = 9800;char passwords98[10] = {'0','1','2','3'};int passwordi99 = 9900;char passwords99[10] = {'1','2','3','4'};int passwordi100 = 10000;char passwords100[10] = {'2','3','4','5'};int passwordi101 = 10100;char passwords101[10] = {'3','4','5','6'};int passwordi102 = 10200;char passwords102[10] = {'4','5','6','7'};int passwordi103 = 10300;char passwords103[10] = {'5','6','7','8'};int passwordi104 = 10400;char passwords104[10] = {'6','7','8','9'};int passwordi105 = 10500;char passwords105[10] = {'0','1','2','3'};int passwordi106 = 10600;char passwords106[10] = {'1','2','3','4'};int passwordi107 = 10700;char passwords107[10] = {'2','3','4','5'};int passwordi108 = 10800;char passwords108[10] = {'3','4','5','6'};int passwordi109 = 10900;char passwords109[10] = {'4','5','6','7'};int passwordi110 = 11000;char passwords110[10] = {'5','6','7','8'};int passwordi111 = 11100;char passwords111[10] = {'6','7','8','9'};int passwordi112 = 11200;char passwords112[10] = {'0','1','2','3'};int passwordi113 = 11300;char passwords113[10] = {'1','2','3','4'};int passwordi114 = 11400;char passwords114[10] = {'2','3','4','5'};int passwordi115 = 11500;char passwords115[10] = {'3','4','5','6'};int passwordi116 = 11600;char passwords116[10] = {'4','5','6','7'};int passwordi117 = 11700;char passwords117[10] = {'5','6','7','8'};int passwordi118 = 11800;char passwords118[10] = {'6','7','8','9'};int passwordi119 = 11900;char passwords119[10] = {'0','1','2','3'};int passwordi120 = 12000;char passwords120[10] = {'1','2','3','4'};int passwordi121 = 12100;char passwords121[10] = {'2','3','4','5'};int passwordi122 = 12200;char passwords122[10] = {'3','4','5','6'};int passwordi123 = 12300;char passwords123[10] = {'4','5','6','7'};int passwordi124 = 12400;char passwords124[10] = {'5','6','7','8'};int passwordi125 = 12500;char passwords125[10] = {'6','7','8','9'};int passwordi126 = 12600;char passwords126[10] = {'0','1','2','3'};int passwordi127 = 12700;char passwords127[10] = {'1','2','3','4'};int passwordi128 = 12800;char passwords128[10] = {'2','3','4','5'};int passwordi129 = 12900;char passwords129[10] = {'3','4','5','6'};int passwordi130 = 13000;char passwords130[10] = {'4','5','6','7'};int passwordi131 = 13100;char passwords131[10] = {'5','6','7','8'};int passwordi132 = 13200;char passwords132[10] = {'6','7','8','9'};int passwordi133 = 13300;char passwords133[10] = {'0','1','2','3'};int passwordi134 = 13400;char passwords134[10] = {'1','2','3','4'};int passwordi135 = 13500;char passwords135[10] = {'2','3','4','5'};int passwordi136 = 13600;char passwords136[10] = {'3','4','5','6'};int passwordi137 = 13700;char passwords137[10] = {'4','5','6','7'};int passwordi138 = 13800;char passwords138[10] = {'5','6','7','8'};int passwordi139 = 13900;char passwords139[10] = {'6','7','8','9'};int passwordi140 = 14000;char passwords140[10] = {'0','1','2','3'};int passwordi141 = 14100;char passwords141[10] = {'1','2','3','4'};int passwordi142 = 14200;char passwords142[10] = {'2','3','4','5'};int passwordi143 = 14300;char passwords143[10] = {'3','4','5','6'};int passwordi144 = 14400;char passwords144[10] = {'4','5','6','7'};int passwordi145 = 14500;char passwords145[10] = {'5','6','7','8'};int passwordi146 = 14600;char passwords146[10] = {'6','7','8','9'};int passwordi147 = 14700;char passwords147[10] = {'0','1','2','3'};int passwordi148 = 14800;char passwords148[10] = {'1','2','3','4'};int passwordi149 = 14900;char passwords149[10] = {'2','3','4','5'};int passwordi150 = 15000;char passwords150[10] = {'3','4','5','6'};int passwordi151 = 15100;char passwords151[10] = {'4','5','6','7'};int passwordi152 = 15200;char passwords152[10] = {'5','6','7','8'};int passwordi153 = 15300;char passwords153[10] = {'6','7','8','9'};int passwordi154 = 15400;char passwords154[10] = {'0','1','2','3'};int passwordi155 = 15500;char passwords155[10] = {'1','2','3','4'};int passwordi156 = 15600;char passwords156[10] = {'2','3','4','5'};int passwordi157 = 15700;char passwords157[10] = {'3','4','5','6'};int passwordi158 = 15800;char passwords158[10] = {'4','5','6','7'};int passwordi159 = 15900;char passwords159[10] = {'5','6','7','8'};int passwordi160 = 16000;char passwords160[10] = {'6','7','8','9'};int passwordi161 = 16100;char passwords161[10] = {'0','1','2','3'};int passwordi162 = 16200;char passwords162[10] = {'1','2','3','4'};int passwordi163 = 16300;char passwords163[10] = {'2','3','4','5'};int passwordi164 = 16400;char passwords164[10] = {'3','4','5','6'};int passwordi165 = 16500;char passwords165[10] = {'4','5','6','7'};int passwordi166 = 16600;char passwords166[10] = {'5','6','7','8'};int passwordi167 = 16700;char passwords167[10] = {'6','7','8','9'};int passwordi168 = 16800;char passwords168[10] = {'0','1','2','3'};int passwordi169 = 16900;char passwords169[10] = {'1','2','3','4'};int passwordi170 = 17000;char passwords170[10] = {'2','3','4','5'};int passwordi171 = 17100;char passwords171[10] = {'3','4','5','6'};int passwordi172 = 17200;char passwords172[10] = {'4','5','6','7'};int passwordi173 = 17300;char passwords173[10] = {'5','6','7','8'};int passwordi174 = 17400;char passwords174[10] = {'6','7','8','9'};int passwordi175 = 17500;char passwords175[10] = {'0','1','2','3'};int passwordi176 = 17600;char passwords176[10] = {'1','2','3','4'};int passwordi177 = 17700;char passwords177[10] = {'2','3','4','5'};int passwordi178 = 17800;char passwords178[10] = {'3','4','5','6'};int passwordi179 = 17900;char passwords179[10] = {'4','5','6','7'};int passwordi180 = 18000;char passwords180[10] = {'5','6','7','8'};int passwordi181 = 18100;char passwords181[10] = {'6','7','8','9'};int passwordi182 = 18200;char passwords182[10] = {'0','1','2','3'};int passwordi183 = 18300;char passwords183[10] = {'1','2','3','4'};int passwordi184 = 18400;char passwords184[10] = {'2','3','4','5'};int passwordi185 = 18500;char passwords185[10] = {'3','4','5','6'};int passwordi186 = 18600;char passwords186[10] = {'4','5','6','7'};int passwordi187 = 18700;char passwords187[10] = {'5','6','7','8'};int passwordi188 = 18800;char passwords188[10] = {'6','7','8','9'};int passwordi189 = 18900;char passwords189[10] = {'0','1','2','3'};int passwordi190 = 19000;char passwords190[10] = {'1','2','3','4'};int passwordi191 = 19100;char passwords191[10] = {'2','3','4','5'};int passwordi192 = 19200;char passwords192[10] = {'3','4','5','6'};int passwordi193 = 19300;char passwords193[10] = {'4','5','6','7'};int passwordi194 = 19400;char passwords194[10] = {'5','6','7','8'};int passwordi195 = 19500;char passwords195[10] = {'6','7','8','9'};int passwordi196 = 19600;char passwords196[10] = {'0','1','2','3'};int passwordi197 = 19700;char passwords197[10] = {'1','2','3','4'};int passwordi198 = 19800;char passwords198[10] = {'2','3','4','5'};int passwordi199 = 19900;char passwords199[10] = {'3','4','5','6'};int passwordi200 = 20000;char passwords200[10] = {'4','5','6','7'};int passwordi201 = 20100;char passwords201[10] = {'5','6','7','8'};int passwordi202 = 20200;char passwords202[10] = {'6','7','8','9'};int passwordi203 = 20300;char passwords203[10] = {'0','1','2','3'};int passwordi204 = 20400;char passwords204[10] = {'1','2','3','4'};int passwordi205 = 20500;char passwords205[10] = {'2','3','4','5'};int passwordi206 = 20600;char passwords206[10] = {'3','4','5','6'};int passwordi207 = 20700;char passwords207[10] = {'4','5','6','7'};int passwordi208 = 20800;char passwords208[10] = {'5','6','7','8'};int passwordi209 = 20900;char passwords209[10] = {'6','7','8','9'};int passwordi210 = 21000;char passwords210[10] = {'0','1','2','3'};int passwordi211 = 21100;char passwords211[10] = {'1','2','3','4'};int passwordi212 = 21200;char passwords212[10] = {'2','3','4','5'};int passwordi213 = 21300;char passwords213[10] = {'3','4','5','6'};int passwordi214 = 21400;char passwords214[10] = {'4','5','6','7'};int passwordi215 = 21500;char passwords215[10] = {'5','6','7','8'};int passwordi216 = 21600;char passwords216[10] = {'6','7','8','9'};int passwordi217 = 21700;char passwords217[10] = {'0','1','2','3'};int passwordi218 = 21800;char passwords218[10] = {'1','2','3','4'};int passwordi219 = 21900;char passwords219[10] = {'2','3','4','5'};int passwordi220 = 22000;char passwords220[10] = {'3','4','5','6'};int passwordi221 = 22100;char passwords221[10] = {'4','5','6','7'};int passwordi222 = 22200;char passwords222[10] = {'5','6','7','8'};int passwordi223 = 22300;char passwords223[10] = {'6','7','8','9'};int passwordi224 = 22400;char passwords224[10] = {'0','1','2','3'};int passwordi225 = 22500;char passwords225[10] = {'1','2','3','4'};int passwordi226 = 22600;char passwords226[10] = {'2','3','4','5'};int passwordi227 = 22700;char passwords227[10] = {'3','4','5','6'};int passwordi228 = 22800;char passwords228[10] = {'4','5','6','7'};int passwordi229 = 22900;char passwords229[10] = {'5','6','7','8'};int passwordi230 = 23000;char passwords230[10] = {'6','7','8','9'};int passwordi231 = 23100;char passwords231[10] = {'0','1','2','3'};int passwordi232 = 23200;char passwords232[10] = {'1','2','3','4'};int passwordi233 = 23300;char passwords233[10] = {'2','3','4','5'};int passwordi234 = 23400;char passwords234[10] = {'3','4','5','6'};int passwordi235 = 23500;char passwords235[10] = {'4','5','6','7'};int passwordi236 = 23600;char passwords236[10] = {'5','6','7','8'};int passwordi237 = 23700;char passwords237[10] = {'6','7','8','9'};int passwordi238 = 23800;char passwords238[10] = {'0','1','2','3'};int passwordi239 = 23900;char passwords239[10] = {'1','2','3','4'};int passwordi240 = 24000;char passwords240[10] = {'2','3','4','5'};int passwordi241 = 24100;char passwords241[10] = {'3','4','5','6'};int passwordi242 = 24200;char passwords242[10] = {'4','5','6','7'};int passwordi243 = 24300;char passwords243[10] = {'5','6','7','8'};int passwordi244 = 24400;char passwords244[10] = {'6','7','8','9'};int passwordi245 = 24500;char passwords245[10] = {'0','1','2','3'};int passwordi246 = 24600;char passwords246[10] = {'1','2','3','4'};int passwordi247 = 24700;char passwords247[10] = {'2','3','4','5'};int passwordi248 = 24800;char passwords248[10] = {'3','4','5','6'};int passwordi249 = 24900;char passwords249[10] = {'4','5','6','7'};int passwordi250 = 25000;char passwords250[10] = {'5','6','7','8'};int passwordi251 = 25100;char passwords251[10] = {'6','7','8','9'};int passwordi252 = 25200;char passwords252[10] = {'0','1','2','3'};int passwordi253 = 25300;char passwords253[10] = {'1','2','3','4'};int passwordi254 = 25400;char passwords254[10] = {'2','3','4','5'};int passwordi255 = 25500;char passwords255[10] = {'3','4','5','6'};int passwordi256 = 25600;char passwords256[10] = {'4','5','6','7'};int passwordi257 = 25700;char passwords257[10] = {'5','6','7','8'};int passwordi258 = 25800;char passwords258[10] = {'6','7','8','9'};int passwordi259 = 25900;char passwords259[10] = {'0','1','2','3'};int passwordi260 = 26000;char passwords260[10] = {'1','2','3','4'};int passwordi261 = 26100;char passwords261[10] = {'2','3','4','5'};int passwordi262 = 26200;char passwords262[10] = {'3','4','5','6'};int passwordi263 = 26300;char passwords263[10] = {'4','5','6','7'};int passwordi264 = 26400;char passwords264[10] = {'5','6','7','8'};int passwordi265 = 26500;char passwords265[10] = {'6','7','8','9'};int passwordi266 = 26600;char passwords266[10] = {'0','1','2','3'};int passwordi267 = 26700;char passwords267[10] = {'1','2','3','4'};int passwordi268 = 26800;char passwords268[10] = {'2','3','4','5'};int passwordi269 = 26900;char passwords269[10] = {'3','4','5','6'};int passwordi270 = 27000;char passwords270[10] = {'4','5','6','7'};int passwordi271 = 27100;char passwords271[10] = {'5','6','7','8'};int passwordi272 = 27200;char passwords272[10] = {'6','7','8','9'};int passwordi273 = 27300;char passwords273[10] = {'0','1','2','3'};int passwordi274 = 27400;char passwords274[10] = {'1','2','3','4'};int passwordi275 = 27500;char passwords275[10] = {'2','3','4','5'};int passwordi276 = 27600;char passwords276[10] = {'3','4','5','6'};int passwordi277 = 27700;char passwords277[10] = {'4','5','6','7'};int passwordi278 = 27800;char passwords278[10] = {'5','6','7','8'};int passwordi279 = 27900;char passwords279[10] = {'6','7','8','9'};int passwordi280 = 28000;char passwords280[10] = {'0','1','2','3'};int passwordi281 = 28100;char passwords281[10] = {'1','2','3','4'};int passwordi282 = 28200;char passwords282[10] = {'2','3','4','5'};int passwordi283 = 28300;char passwords283[10] = {'3','4','5','6'};int passwordi284 = 28400;char passwords284[10] = {'4','5','6','7'};int passwordi285 = 28500;char passwords285[10] = {'5','6','7','8'};int passwordi286 = 28600;char passwords286[10] = {'6','7','8','9'};int passwordi287 = 28700;char passwords287[10] = {'0','1','2','3'};int passwordi288 = 28800;char passwords288[10] = {'1','2','3','4'};int passwordi289 = 28900;char passwords289[10] = {'2','3','4','5'};int passwordi290 = 29000;char passwords290[10] = {'3','4','5','6'};int passwordi291 = 29100;char passwords291[10] = {'4','5','6','7'};int passwordi292 = 29200;char passwords292[10] = {'5','6','7','8'};int passwordi293 = 29300;char passwords293[10] = {'6','7','8','9'};int passwordi294 = 29400;char passwords294[10] = {'0','1','2','3'};int passwordi295 = 29500;char passwords295[10] = {'1','2','3','4'};int passwordi296 = 29600;char passwords296[10] = {'2','3','4','5'};int passwordi297 = 29700;char passwords297[10] = {'3','4','5','6'};int passwordi298 = 29800;char passwords298[10] = {'4','5','6','7'};int passwordi299 = 29900;char passwords299[10] = {'5','6','7','8'};int passwordi300 = 30000;char passwords300[10] = {'6','7','8','9'};int passwordi301 = 30100;char passwords301[10] = {'0','1','2','3'};int passwordi302 = 30200;char passwords302[10] = {'1','2','3','4'};int passwordi303 = 30300;char passwords303[10] = {'2','3','4','5'};int passwordi304 = 30400;char passwords304[10] = {'3','4','5','6'};int passwordi305 = 30500;char passwords305[10] = {'4','5','6','7'};int passwordi306 = 30600;char passwords306[10] = {'5','6','7','8'};int passwordi307 = 30700;char passwords307[10] = {'6','7','8','9'};int passwordi308 = 30800;char passwords308[10] = {'0','1','2','3'};int passwordi309 = 30900;char passwords309[10] = {'1','2','3','4'};int passwordi310 = 31000;char passwords310[10] = {'2','3','4','5'};int passwordi311 = 31100;char passwords311[10] = {'3','4','5','6'};int passwordi312 = 31200;char passwords312[10] = {'4','5','6','7'};int passwordi313 = 31300;char passwords313[10] = {'5','6','7','8'};int passwordi314 = 31400;char passwords314[10] = {'6','7','8','9'};int passwordi315 = 31500;char passwords315[10] = {'0','1','2','3'};int passwordi316 = 31600;char passwords316[10] = {'1','2','3','4'};int passwordi317 = 31700;char passwords317[10] = {'2','3','4','5'};int passwordi318 = 31800;char passwords318[10] = {'3','4','5','6'};int passwordi319 = 31900;char passwords319[10] = {'4','5','6','7'};int passwordi320 = 32000;char passwords320[10] = {'5','6','7','8'};int passwordi321 = 32100;char passwords321[10] = {'6','7','8','9'};int passwordi322 = 32200;char passwords322[10] = {'0','1','2','3'};int passwordi323 = 32300;char passwords323[10] = {'1','2','3','4'};int passwordi324 = 32400;char passwords324[10] = {'2','3','4','5'};int passwordi325 = 32500;char passwords325[10] = {'3','4','5','6'};int passwordi326 = 32600;char passwords326[10] = {'4','5','6','7'};int passwordi327 = 32700;char passwords327[10] = {'5','6','7','8'};int passwordi328 = 32800;char passwords328[10] = {'6','7','8','9'};int passwordi329 = 32900;char passwords329[10] = {'0','1','2','3'};int passwordi330 = 33000;char passwords330[10] = {'1','2','3','4'};int passwordi331 = 33100;char passwords331[10] = {'2','3','4','5'};int passwordi332 = 33200;char passwords332[10] = {'3','4','5','6'};int passwordi333 = 33300;char passwords333[10] = {'4','5','6','7'};int passwordi334 = 33400;char passwords334[10] = {'5','6','7','8'};int passwordi335 = 33500;char passwords335[10] = {'6','7','8','9'};int passwordi336 = 33600;char passwords336[10] = {'0','1','2','3'};int passwordi337 = 33700;char passwords337[10] = {'1','2','3','4'};int passwordi338 = 33800;char passwords338[10] = {'2','3','4','5'};int passwordi339 = 33900;char passwords339[10] = {'3','4','5','6'};int passwordi340 = 34000;char passwords340[10] = {'4','5','6','7'};int passwordi341 = 34100;char passwords341[10] = {'5','6','7','8'};int passwordi342 = 34200;char passwords342[10] = {'6','7','8','9'};int passwordi343 = 34300;char passwords343[10] = {'0','1','2','3'};int passwordi344 = 34400;char passwords344[10] = {'1','2','3','4'};int passwordi345 = 34500;char passwords345[10] = {'2','3','4','5'};int passwordi346 = 34600;char passwords346[10] = {'3','4','5','6'};int passwordi347 = 34700;char passwords347[10] = {'4','5','6','7'};int passwordi348 = 34800;char passwords348[10] = {'5','6','7','8'};int passwordi349 = 34900;char passwords349[10] = {'6','7','8','9'};int passwordi350 = 35000;char passwords350[10] = {'0','1','2','3'};int passwordi351 = 35100;char passwords351[10] = {'1','2','3','4'};int passwordi352 = 35200;char passwords352[10] = {'2','3','4','5'};int passwordi353 = 35300;char passwords353[10] = {'3','4','5','6'};int passwordi354 = 35400;char passwords354[10] = {'4','5','6','7'};int passwordi355 = 35500;char passwords355[10] = {'5','6','7','8'};int passwordi356 = 35600;char passwords356[10] = {'6','7','8','9'};int passwordi357 = 35700;char passwords357[10] = {'0','1','2','3'};int passwordi358 = 35800;char passwords358[10] = {'1','2','3','4'};int passwordi359 = 35900;char passwords359[10] = {'2','3','4','5'};int passwordi360 = 36000;char passwords360[10] = {'3','4','5','6'};int passwordi361 = 36100;char passwords361[10] = {'4','5','6','7'};int passwordi362 = 36200;char passwords362[10] = {'5','6','7','8'};int passwordi363 = 36300;char passwords363[10] = {'6','7','8','9'};int passwordi364 = 36400;char passwords364[10] = {'0','1','2','3'};int passwordi365 = 36500;char passwords365[10] = {'1','2','3','4'};int passwordi366 = 36600;char passwords366[10] = {'2','3','4','5'};int passwordi367 = 36700;char passwords367[10] = {'3','4','5','6'};int passwordi368 = 36800;char passwords368[10] = {'4','5','6','7'};int passwordi369 = 36900;char passwords369[10] = {'5','6','7','8'};int passwordi370 = 37000;char passwords370[10] = {'6','7','8','9'};int passwordi371 = 37100;char passwords371[10] = {'0','1','2','3'};int passwordi372 = 37200;char passwords372[10] = {'1','2','3','4'};int passwordi373 = 37300;char passwords373[10] = {'2','3','4','5'};int passwordi374 = 37400;char passwords374[10] = {'3','4','5','6'};int passwordi375 = 37500;char passwords375[10] = {'4','5','6','7'};int passwordi376 = 37600;char passwords376[10] = {'5','6','7','8'};int passwordi377 = 37700;char passwords377[10] = {'6','7','8','9'};int passwordi378 = 37800;char passwords378[10] = {'0','1','2','3'};int passwordi379 = 37900;char passwords379[10] = {'1','2','3','4'};int passwordi380 = 38000;char passwords380[10] = {'2','3','4','5'};int passwordi381 = 38100;char passwords381[10] = {'3','4','5','6'};int passwordi382 = 38200;char passwords382[10] = {'4','5','6','7'};int passwordi383 = 38300;char passwords383[10] = {'5','6','7','8'};int passwordi384 = 38400;char passwords384[10] = {'6','7','8','9'};int passwordi385 = 38500;char passwords385[10] = {'0','1','2','3'};int passwordi386 = 38600;char passwords386[10] = {'1','2','3','4'};int passwordi387 = 38700;char passwords387[10] = {'2','3','4','5'};int passwordi388 = 38800;char passwords388[10] = {'3','4','5','6'};int passwordi389 = 38900;char passwords389[10] = {'4','5','6','7'};int passwordi390 = 39000;char passwords390[10] = {'5','6','7','8'};int passwordi391 = 39100;char passwords391[10] = {'6','7','8','9'};int passwordi392 = 39200;char passwords392[10] = {'0','1','2','3'};int passwordi393 = 39300;char passwords393[10] = {'1','2','3','4'};int passwordi394 = 39400;char passwords394[10] = {'2','3','4','5'};int passwordi395 = 39500;char passwords395[10] = {'3','4','5','6'};int passwordi396 = 39600;char passwords396[10] = {'4','5','6','7'};int passwordi397 = 39700;char passwords397[10] = {'5','6','7','8'};int passwordi398 = 39800;char passwords398[10] = {'6','7','8','9'};int passwordi399 = 39900;char passwords399[10] = {'0','1','2','3'};int passwordi400 = 40000;char passwords400[10] = {'1','2','3','4'};int passwordi401 = 40100;char passwords401[10] = {'2','3','4','5'};int passwordi402 = 40200;char passwords402[10] = {'3','4','5','6'};int passwordi403 = 40300;char passwords403[10] = {'4','5','6','7'};int passwordi404 = 40400;char passwords404[10] = {'5','6','7','8'};int passwordi405 = 40500;char passwords405[10] = {'6','7','8','9'};int passwordi406 = 40600;char passwords406[10] = {'0','1','2','3'};int passwordi407 = 40700;char passwords407[10] = {'1','2','3','4'};int passwordi408 = 40800;char passwords408[10] = {'2','3','4','5'};int passwordi409 = 40900;char passwords409[10] = {'3','4','5','6'};int passwordi410 = 41000;char passwords410[10] = {'4','5','6','7'};int passwordi411 = 41100;char passwords411[10] = {'5','6','7','8'};int passwordi412 = 41200;char passwords412[10] = {'6','7','8','9'};int passwordi413 = 41300;char passwords413[10] = {'0','1','2','3'};int passwordi414 = 41400;char passwords414[10] = {'1','2','3','4'};int passwordi415 = 41500;char passwords415[10] = {'2','3','4','5'};int passwordi416 = 41600;char passwords416[10] = {'3','4','5','6'};int passwordi417 = 41700;char passwords417[10] = {'4','5','6','7'};int passwordi418 = 41800;char passwords418[10] = {'5','6','7','8'};int passwordi419 = 41900;char passwords419[10] = {'6','7','8','9'};int passwordi420 = 42000;char passwords420[10] = {'0','1','2','3'};int passwordi421 = 42100;char passwords421[10] = {'1','2','3','4'};int passwordi422 = 42200;char passwords422[10] = {'2','3','4','5'};int passwordi423 = 42300;char passwords423[10] = {'3','4','5','6'};int passwordi424 = 42400;char passwords424[10] = {'4','5','6','7'};int passwordi425 = 42500;char passwords425[10] = {'5','6','7','8'};int passwordi426 = 42600;char passwords426[10] = {'6','7','8','9'};int passwordi427 = 42700;char passwords427[10] = {'0','1','2','3'};int passwordi428 = 42800;char passwords428[10] = {'1','2','3','4'};int passwordi429 = 42900;char passwords429[10] = {'2','3','4','5'};int passwordi430 = 43000;char passwords430[10] = {'3','4','5','6'};int passwordi431 = 43100;char passwords431[10] = {'4','5','6','7'};int passwordi432 = 43200;char passwords432[10] = {'5','6','7','8'};int passwordi433 = 43300;char passwords433[10] = {'6','7','8','9'};int passwordi434 = 43400;char passwords434[10] = {'0','1','2','3'};int passwordi435 = 43500;char passwords435[10] = {'1','2','3','4'};int passwordi436 = 43600;char passwords436[10] = {'2','3','4','5'};int passwordi437 = 43700;char passwords437[10] = {'3','4','5','6'};int passwordi438 = 43800;char passwords438[10] = {'4','5','6','7'};int passwordi439 = 43900;char passwords439[10] = {'5','6','7','8'};int passwordi440 = 44000;char passwords440[10] = {'6','7','8','9'};int passwordi441 = 44100;char passwords441[10] = {'0','1','2','3'};int passwordi442 = 44200;char passwords442[10] = {'1','2','3','4'};int passwordi443 = 44300;char passwords443[10] = {'2','3','4','5'};int passwordi444 = 44400;char passwords444[10] = {'3','4','5','6'};int passwordi445 = 44500;char passwords445[10] = {'4','5','6','7'};int passwordi446 = 44600;char passwords446[10] = {'5','6','7','8'};int passwordi447 = 44700;char passwords447[10] = {'6','7','8','9'};int passwordi448 = 44800;char passwords448[10] = {'0','1','2','3'};int passwordi449 = 44900;char passwords449[10] = {'1','2','3','4'};int passwordi450 = 45000;char passwords450[10] = {'2','3','4','5'};int passwordi451 = 45100;char passwords451[10] = {'3','4','5','6'};int passwordi452 = 45200;char passwords452[10] = {'4','5','6','7'};int passwordi453 = 45300;char passwords453[10] = {'5','6','7','8'};int passwordi454 = 45400;char passwords454[10] = {'6','7','8','9'};int passwordi455 = 45500;char passwords455[10] = {'0','1','2','3'};int passwordi456 = 45600;char passwords456[10] = {'1','2','3','4'};int passwordi457 = 45700;char passwords457[10] = {'2','3','4','5'};int passwordi458 = 45800;char passwords458[10] = {'3','4','5','6'};int passwordi459 = 45900;char passwords459[10] = {'4','5','6','7'};int passwordi460 = 46000;char passwords460[10] = {'5','6','7','8'};int passwordi461 = 46100;char passwords461[10] = {'6','7','8','9'};int passwordi462 = 46200;char passwords462[10] = {'0','1','2','3'};int passwordi463 = 46300;char passwords463[10] = {'1','2','3','4'};int passwordi464 = 46400;char passwords464[10] = {'2','3','4','5'};int passwordi465 = 46500;char passwords465[10] = {'3','4','5','6'};int passwordi466 = 46600;char passwords466[10] = {'4','5','6','7'};int passwordi467 = 46700;char passwords467[10] = {'5','6','7','8'};int passwordi468 = 46800;char passwords468[10] = {'6','7','8','9'};int passwordi469 = 46900;char passwords469[10] = {'0','1','2','3'};int passwordi470 = 47000;char passwords470[10] = {'1','2','3','4'};int passwordi471 = 47100;char passwords471[10] = {'2','3','4','5'};int passwordi472 = 47200;char passwords472[10] = {'3','4','5','6'};int passwordi473 = 47300;char passwords473[10] = {'4','5','6','7'};int passwordi474 = 47400;char passwords474[10] = {'5','6','7','8'};int passwordi475 = 47500;char passwords475[10] = {'6','7','8','9'};int passwordi476 = 47600;char passwords476[10] = {'0','1','2','3'};int passwordi477 = 47700;char passwords477[10] = {'1','2','3','4'};int passwordi478 = 47800;char passwords478[10] = {'2','3','4','5'};int passwordi479 = 47900;char passwords479[10] = {'3','4','5','6'};int passwordi480 = 48000;char passwords480[10] = {'4','5','6','7'};int passwordi481 = 48100;char passwords481[10] = {'5','6','7','8'};int passwordi482 = 48200;char passwords482[10] = {'6','7','8','9'};int passwordi483 = 48300;char passwords483[10] = {'0','1','2','3'};int passwordi484 = 48400;char passwords484[10] = {'1','2','3','4'};int passwordi485 = 48500;char passwords485[10] = {'2','3','4','5'};int passwordi486 = 48600;char passwords486[10] = {'3','4','5','6'};int passwordi487 = 48700;char passwords487[10] = {'4','5','6','7'};int passwordi488 = 48800;char passwords488[10] = {'5','6','7','8'};int passwordi489 = 48900;char passwords489[10] = {'6','7','8','9'};int passwordi490 = 49000;char passwords490[10] = {'0','1','2','3'};int passwordi491 = 49100;char passwords491[10] = {'1','2','3','4'};int passwordi492 = 49200;char passwords492[10] = {'2','3','4','5'};int passwordi493 = 49300;char passwords493[10] = {'3','4','5','6'};int passwordi494 = 49400;char passwords494[10] = {'4','5','6','7'};int passwordi495 = 49500;char passwords495[10] = {'5','6','7','8'};int passwordi496 = 49600;char passwords496[10] = {'6','7','8','9'};int passwordi497 = 49700;char passwords497[10] = {'0','1','2','3'};int passwordi498 = 49800;char passwords498[10] = {'1','2','3','4'};int passwordi499 = 49900;char passwords499[10] = {'2','3','4','5'};

typedef union uwb {
	unsigned w;
	unsigned char b[4];
} passwordData;
	
typedef unsigned Digest[4];

unsigned f0( unsigned abcd[] ){
	return ( abcd[1] & abcd[2]) | (~abcd[1] & abcd[3]);}

unsigned f1( unsigned abcd[] ){
	return ( abcd[3] & abcd[1]) | (~abcd[3] & abcd[2]);}

unsigned f2( unsigned abcd[] ){
	return  abcd[1] ^ abcd[2] ^ abcd[3];}

unsigned f3( unsigned abcd[] ){
	return abcd[2] ^ (abcd[1] |~ abcd[3]);}

typedef unsigned (*DgstFctn)(unsigned a[]);

unsigned *calcKs( unsigned *k)
{
	double s, pwr;
	int i;

	pwr = pow( 2, 32);
	for (i=0; i<64; i++) {
		s = fabs(sin(1+i));
		k[i] = (unsigned)( s * pwr );
	}
	return k;
}

// ROtate v Left by amt bits
unsigned rol( unsigned v, short amt )
{
	unsigned  msk1 = (1<<amt) -1;
	return ((v>>(32-amt)) & msk1) | ((v<<amt) & ~msk1);
}

unsigned *passwd( const char *msg, int mlen)
{
	static Digest h0 = { 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476 };
//    static Digest h0 = { 0x01234567, 0x89ABCDEF, 0xFEDCBA98, 0x76543210 };
	static DgstFctn ff[] = { &f0, &f1, &f2, &f3 };
	static short M[] = { 1, 5, 3, 7 };
	static short O[] = { 0, 1, 5, 0 };
	static short rot0[] = { 7,12,17,22};
	static short rot1[] = { 5, 9,14,20};
	static short rot2[] = { 4,11,16,23};
	static short rot3[] = { 6,10,15,21};
	static short *rots[] = {rot0, rot1, rot2, rot3 };
	static unsigned kspace[64];
	static unsigned *k;

	static Digest h;
	Digest abcd;
	DgstFctn fctn;
	short m, o, g;
	unsigned f;
	short *rotn;
	union {
		unsigned w[16];
		char     b[64];
	}mm;
	int os = 0;
	int grp, grps, q, p;
	unsigned char *msg2;

	if (k==NULL) k= calcKs(kspace);

	for (q=0; q<4; q++) h[q] = h0[q];   // initialize

	{
		grps  = 1 + (mlen+8)/64;
		msg2 = malloc( 64*grps);
		memcpy( msg2, msg, mlen);
		msg2[mlen] = (unsigned char)0x80; 
		q = mlen + 1;
		while (q < 64*grps){ msg2[q] = 0; q++ ; }
		{
//            unsigned char t;
			passwordData u;
			u.w = 8*mlen;
//            t = u.b[0]; u.b[0] = u.b[3]; u.b[3] = t;
//            t = u.b[1]; u.b[1] = u.b[2]; u.b[2] = t;
			q -= 8;
			memcpy(msg2+q, &u.w, 4 );
		}
	}

	for (grp=0; grp<grps; grp++)
	{
		memcpy( mm.b, msg2+os, 64);
		for(q=0;q<4;q++) abcd[q] = h[q];
		for (p = 0; p<4; p++) {
			fctn = ff[p];
			rotn = rots[p];
			m = M[p]; o= O[p];
			for (q=0; q<16; q++) {
				g = (m*q + o) % 16;
				f = abcd[1] + rol( abcd[0]+ fctn(abcd) + k[q+16*p] + mm.w[g], rotn[q%4]);

				abcd[0] = abcd[3];
				abcd[3] = abcd[2];
				abcd[2] = abcd[1];
				abcd[1] = f;
			}
		}
		for (p=0; p<4; p++)
			h[p] += abcd[p];
		os += 64;
	}

	if( msg2 )
		free( msg2 );

	return h;
}

int main(void) {
	printf("Hi, You are trying to get list of string and values in memory using **mingw** tools kits.\nIt's a pure c program using glibc library.\nEnjoy your trying, I like your skills.\n");
	char *name="Name";
	while(1) {
		#define MAX     96
		char pass[MAX];
		char buffer[MAX];
		strcpy(buffer, "");
		printf("\nEnter system password: ");
		scanf("%s", &pass);
		unsigned *d = passwd(pass, strlen(pass));
		passwordData u;
		for(int j=0;j<4; j++){
			u.w = d[j];
			for(int k=0;k<4;k++) {
				char temp[10];
				sprintf(temp, "%02x", u.b[k]);
				strcat(buffer, temp);
			}
		}
		printf("%s\n", buffer);
		char p1[]="d279e0a6g4dfg56sdfv23bb";
		char p2[]="x4cv56sd4f5sdc123sdf123sdf";
		char p3[]="s74d5f3zxc1v2z3xc123sd1f2s3";
		char p4[]="78rw7df89s4df89sdf456sdf";
		char p5[]="d1c2v3xcv156sd4f5wsf456sd4f56sdf";
		char p6[]="41xz23cv1xcv231cv23x1cv32xvxvc12x3cv";
		char p7[]="1x4c32dsf4s56df46s5df465sdf";
		char p8[]="sd4f5sd4f56sd4f65s6df";
		char p9[]="1c23vx1v23xcv123xc1v23";
		char p10[]="xmckjzxncjznxcjzjxcjzkwer";
		char p11[]="5sdfs56f5s6d4f56sd4f65s4d5f6";
		if(strcmp(buffer, "b45e0d92f6c1a88d279e0a66a7a0ffbb") == 0) {
			printf("Welcome %s\n", name);
			break;
		}
		else {
			printf("Error: wrong password!\n");
		}
	}
	return 0;
}
