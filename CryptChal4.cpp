#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>


#include "utils.h"
using namespace std;

int challenge_4() {
    cout << "\n-------- CHALLENGE 4 --------\n";
    cout << "This challenge is not currently working due to syntax errors and time constraints." << endl;
    cout << "The attempted code is commented out for compilation reasons and can be viewed if necessary." << endl;
    cout << "\n\tNOTE KNOWN BUG: A unknown initilizer error can occur when calling decode_single_char_xor and initializing the freq map. \n\tError should not occur aboce C++11 (Current: C++17: See task.json)" << endl << endl;

        // char hex_Vec1[] = "0e3647e8592d35514a081243582536ed3de6734059001e3f535ce6271032", "334b041de124f73c18011a50e608097ac308ecee501337ec3e100854201d", "40e127f51c10031d0133590b1e490f3514e05a54143d08222c2a4071e351",
        //                     "45440b171d5c1b21342e021c3a0eee7373215c4024f0eb733cf006e2040c", "22015e420b07ef21164d5935e82338452f42282c1836e42536284c450de3", "043b452e0268e7eb005a080b360f0642e6e342005217ef04a42f3e43113d",
        //                     "581e0829214202063d70030845e5301f5a5212ed0818e22f120b211b171b", "ea0b342957394717132307133f143a1357e9ed1f5023034147465c052616", "0c300b355c2051373a051851ee154a023723414c023a08171e1b4f17595e",
        //                     "550c3e13e80246320b0bec09362542243be42d1d5d060e203e1a0c66ef48", "e159464a582a6a0c50471310084f6b1703221d2e7a54502b2b205c433afa", "ec58ea200e3005090e1725005739eda7342aed311001383fff7c58ef1f11",
        //                     "01305424231c0d2c41f105057f74510d335440332f1038ec17275f5814e1", "05f12f380720ea2b19e24a07e53c142128354e2827f25a08fb401c3126a6", "0d17272f53063954163d050a541b1f1144305ae37d4932431b1f33140b1b",
        //                     "0b4f070f071fe92c200e1fa05e4b272e50201b5d493110e429482c100730", "100a3148080f227fe60a132f0c10174fe3f63d1a5d38eb414ca8e82f2b05", "0a19e83c58400a023b13234572e6e4272bf67434331631e63b5e0f00175c",
        //                     "54520c2ceb45530e0f78111d0b0707e01e4bf43b0606073854324421e6f9", "09e7585353ee4a34190de1354e481c373a1b2b0a136127383e271212191f","0f060d09fb4f2d5024022c5ff6463c390c2b5f1a5532071a31f33503fcea",
        //                     "371d39121605584f48217235ee1e0602445c162e4942254c071954321d29", "4a0900e63e5f161e15554045f3594c2a6a77e4e52711602beaf53ae53bed", "29011616565d2a372a605bee39eced31183fe068185c3b445b391fe53232",
        //                     "e4102337000303452a1e2f2b29493f54ed5a037b3e08311b625cfd005009", "2d560d4b0618203249312a310d5f541f295c3f0f25235c2b20037d1600f3", "2c245155e8253708391a7ceb0d05005c3e080f3f0f0e5a16583b111f4448",
        //                     "493804044d262eec3759594f212d562420105d6a39e70a0f3957f347070c", "e72d1d1f103807590f4339575e00381074485d2d580249f744052605e11d", "e131570ae95307143a71131729552d001057a4540a1f425b190b572dee34",
        //                     "2c1655342f02581c202b0a5c17a358291e1506f325550f05365e165c1c5f", "e318164df80b043e5406296e5359271d152f552e155a43eda81f23231d1c", "001de0413e174e18192c061e4b3d1b5626f90e3e1429544a20ee150d0c20",
        //                     "32e902193219033c58191302441a5c1b584825ea140c290927aaea53e23c", "3a36363a732e32ea3f0e430508204b332c382a19292d5b291122e123446a", "1804115614031f5f571f2b143c5d3c1b257a4b37350f18445a3e08341c3d",
        //                     "21f2fb250b2e55151e77253a3f0e5f4b2030370a4155e720e73914e35a4a", "510a55583a3c491221397c123a2b14a8305b3b09e71b241d0e51202e1a32", "1b51202f4917232b512a141d6812f03c455df05e5a1c2cee14390b3b593a",
        //                     "5f5731e5203116ee131a4a4b24112cef5d0822f035e6547d3a0014462f26","0028fb522104f771501a555d3f581e30e9ec3e49e3e63123432f07794145", "1459f6312f000e5a1373e346e40f211e1b0b0e17000f391f170552150500",
        //                     "7e301e18325717e3412e022f087be30e5641080151357714e0e0eee15e11", "533258e9360f513b083aa51d2824222f40200a470537ecec392d31070b38", "07e32c180dfa56496a461627542115132a4c284050495b23e2245b093159",
        //                     "2d3c230a1e5a300f6c3e26ed0d1709434950fd6f1e121335054129e4e4ec", "ef22fa2112311b11584ce43434f46f521a215433f9514fe33d313a3e0838", "34e7f336270c08010f2f544f0f1c1e235c0222644c2632efec061de2115f",
        //                     "121a42395d4c560d213b0c0a26a7e4f4382718153d5e511158a10b2c021e", "e05d414dfa40222f0c382a03235f4d0d04372d4b7855105e26e44f2e0555", "7f3a4f1351f85b0344223e1177e14707190c0e311f4ca633f5f3e9352372",
        //                     "01424d5d1a322a0d381717130e181d07240c2c19ecee750b1a37085d014c", "16012c5de55a0314a8260e2759e439123ca0c81c321d454e4e0ee14f4c1d", "0b1415512f38580e4e2a227def242643183c224f0ea146443403022fe9fd",
        //                     "43eb2b1078322a02192d5b5e0c360d584d0b5e2c13072912ee32f03f4155", "002a52553e08361b0be0074b573e201c164c093a5c0f0159333b59770d5b", "38e63c1c5244301a5a01f26930321256143e1ae05e1120a9eaf20a192d58",
        //                     "7d54140a152ef4035f09083ded531ee04df55848020656a1342e502649eb", "0c211dfe101702015516341136252f3f06f73247133113f5642d083a3417", "015e3d51433f3c003e5e28030b1d413eee186824504b241e0f0d32373e2b",
        //                     "2d465040ec130c5c0e2704aa17010c40095207223669110f22f45ea155f7", "14552e2b341e5ce0195351066a23e3283e0ee935444b255a1c5c3cef7614", "372b453d5a357c05142be65b3c17f92d2b134853390a312bf92a531b513d",
        //                     "5658265f4c0ce4440a20322f591a413034292b312206a01be6453a512d21", "1c585c19f31f785324f8583d1ee02620342b10a236263f105011ee5b0e14", "0f522b550818591a752e5fea0e033322ee5e280a4a1b244f5a2b35341255",
        //                     "39093c1ced331b264127173f1312e2455fa33b31012c1f4d073c553f5d5e", "18f82d5d07e2430b3b3c1b5b49effb0313173f5d4a2e5c134555ff6b1d1a","550a20234202726341190311295254f4064205aa515ae0145a23071c4e18",
        //                     "3f2047024e3ce4555a1b39fa145455012c3afb0f2d11134846182e3c575b", "e3e456571937762828065443153b51152e262f09c937024405284f236432", "012f580c3536ec5c021574541d5c41123a4e661d5f0f5f344a083e3a5e4c",
        //                     "4216252d01eb0a2a4623621b48360d312c29f33e380650447617124b3e71", "54141e59323606390204e95f1206520e5c084510034d30171c5e744f335d", "1e30061401600b342e171059526d1949431a3f412f56594c183711ea4837",
        //                     "3131254f11e76f550e1e4d26f1391f44363b151c31281ff45259351da0e6", "5def250d0f3505385f22e9f4112633005d272d092e0138275851f943e90e", "0939165718303b445210095c16390cf04f19450e06f4545c0a0c320e3e23",
        //                     "1e0b0b1f573f3d0fe05d43090fa8482242300819313142325b1f4b19365b", "0d3b2a5d271e463d2203765245065d5d684a051e5815265b52f3171d3004", "6af423303817a43324394af15a5c482e3b16f5a46f1e0b5c1201214b5fe4",
        //                     "4030544f3f51151e436e04203a5e3b287ee303490a43fb3b28042f36504e", "1a2d5a03fc0e2c04384046242e2b5e1548101825eb2f285f1a210f022141", "122355e90122281deeed3ba05636003826525d5551572d07030d4935201f",
        //                     "2a3c484a15410d3b16375d4665271b5c4ce7ee37083d3e512b45204f17f6", "03222801255c2c211a7aeb1e042b4e38e8f1293143203139fb202c325f2b", "06542a28041956350e292bf3fe5c32133a2a171b3a3e4e4e3101381529e3",
        //                     "4a5209ef24e5f3225e503b143d0e5747323fe7ee3d5b1b5110395619e65a", "1fee0a3945563d2b5703701817584b5f5b54702522f5031b561929ea2d1e", "e7271935100e3c31211b23113a3a5524e02241181a251d521ff52f3c5a76",
        //                     "144a0efee02f0f5f1d353a1c112e1909234f032953ec591e0a58e55d2cf4", "efee0cf00d0955500210015311467543544708eb590d113d30443d080c1e", "1a562c1f7e2b0030094f051c03e30f4d501a0fe22a2817edfc5e470c3843",
        //                     "1c3df1135321a8e9241a5607f8305d571aa546001e3254555a11511924", "eb1d3f54ec0fea341a097c502ff1111524e24f5b553e49e8576b5b0e1e33", "72413e2f5329e332ec563b5e65185efefd2c3b4e5f0b5133246d214a401d",
        //                     "352a0ae632183d200a162e5346110552131514e0553e51003e220d47424b",  "1d005c58135f3c1b53300c3b49263928f55625454f3be259361ded1f0834", "2d2457524a1e1204255934174d442a1a7d130f350a123c4a075f5be73e30",
        //                     "0c0518582d131f39575925e0231833370c482b270e183810415d5aec1900", "453b181df1572735380b0446097f00111f1425070b2e1958102ceb592928", "010a4a2d0b0926082d2f1525562d1d070a7a08152f5b4438a4150b132e20",
        //                     "2b395d0d5d015d41335d21250de33e3d42152d3f557d1e44e4ee22255d2d", "4a1b5c272d0d1c45072639362e402dee2853e51311262b17aa72eb390410", "e7015f0215352030574b4108e44d0e1a204418e62325ff7f34052f234b2d",
        //                     "1d563c13202346071d39e34055402b0b392c27f552222d3deb3843ee2c16", "29332a521f3c1b0811e33e1a25520e323e75e01c17473f55071226120d3d", "210b35ee1a0a5335222e35033905170c4f3104eb032d425058367d5a2bf2",
        //                     "1e553809415efb1c460f2f0ffafaec491e4d4e49510452e8245a366a4106", "e1f92cee0e10142514e7ec13155c412fe901092f1f0fa738280c5eee5e04", "3526291e0b2a5f486a3051041f4c16372f5402e6f70b31a03525190b161a",
        //                     "260e5e1f0c2e4d7528ef11552fefe247201e4752085c1da903563c162a4b", "2a14ff2e3265e604075e523b24455c364a7f284f3a43051d52152f1119e8", "5f02e55a4b1300063640ef10151002565f0b0c010033a1cbef5d3634484a",
        //                     "1b121c585b495a5e033a09037f2d1754072c2d49084055172a3c220bed4f", "1613400e1632435c0018482aa55b363d26290ae4405ded280f2b0c271536", "4011250ce02119464a1de43113170356342c272d1d3355555e5706245e0a",
        //                     "16272d5e545953002e10020875e223010719555410f91ce518420e382456", "0d4037320345f945241a1d090a545a310142442131464f4d10562ae4f05a", "07ee4d4ae12e571e313c1636313134233e495459e548317708563c2c1b2f",
        //                     "e75803294b36565225552c3406304f0201e43323291b5e0e2159025c2f25", "5e63194411490c44494232237e1b323108573d3f391d1f3537e4165a2b35", "51000a3a264c503b5852072a5636f04f5cea58a42838f5fca876415c3521",
        //                     "3c14130be511275932055a30aa2d03470c51060009f210543002585f5713", "10f0370c5823115200e5015d083e2f1a5df91d68065c1b03f0080855e529", "02ec00f1462d034123151ba6fc07eb3d5e54e85a3f3ee532fb41791a060b",
        //                     "0c29274232f93efb3d465544e45e491b042ced245100e3f05c14134c254b", "5741235f051e080401a8013c065627e8ee5432205114243d54320e133f2d", "4a4d181635411f5d084e31ed230c16506d5125415e060e4dcd0e5f3708e3",
        //                     "2d531c3e22065a5eee07310c145305131800063e4a20094b2006ea131240", "e7335c1c4308160be6aa551a0f5a58243e0b10ee470047683c345e1c5b0c", "5434505ee22a18110d20342e4b53062c4d79042a0a02422e225b2523e95a",
        //                     "3252212407115c07e15eee06391d0519e9271b641330011f383410281f0e", "2cee2b355233292b595d1c69592f483b54584f7154fd4928560752e333a1", "17272b272f110df5e91c560a39104510240b5c4b0c1c570871e422351927",
        //                     "c32550ec3f132c0c2458503ae5241d3c0d7911480a073826315620403615", "16e11c270d2b010650145de2290b0beb1e120a3a354b2104064f3b533c4e", "505746313d4d2e3455290a281ee81d50007e1148252528025237715a342a",
        //                     "1c0a13163e404e40242142061d34185421160220fa031f7a423a08f2e01a", "101d303802f51b0c08ef461259315b553823e622a12d565509e23c624139", "0a3d1309e4384c0eed383846545a035a41ee1771513b090a031e15f45159",
        //                     "2d4944092a1965542507003b23195758403e175a0a450c5c38114de21141",
        //                     };
    
        //  char hex1[BUFSIZ]; // testing
        //   //const char *s = hex_Vec1[0].c_str(); // testing

        // const char* s = hex_Vec1[0].c_str();
        // int n = strnlen(s, BUFSIZ);
        // char* dst = get_bufn(s, n);
        // double char_ratio = 0.9;
        // int i = 0;
        // for (const string& s : hex_Vec1){
        //     const char* src = s.c_str();
        //     char decode_single_char_xor(const char* src, char* dst, int n); // Freq Map Initilizer error when calling funciton??
        //     char c = decode_single_char_xor(src, dst, n);
        //     cout << "Testing:  " << i++ << "";
        //     print_array("   ", dst, n/2);
        // }
        return 0;
}
