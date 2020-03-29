/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID HIT_SWORD = 2480223178U;
        static const AkUniqueID PLAY_FOREST = 207755397U;
        static const AkUniqueID PLAY_WIND = 1020223172U;
        static const AkUniqueID PLAYER_FOOTSTEP = 2453392179U;
        static const AkUniqueID PLAYGHOULS = 3184224717U;
        static const AkUniqueID PLAYPREVIOUSBATTLEBOSS = 981299297U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace ENV_LVL1
        {
            static const AkUniqueID GROUP = 2478762362U;

            namespace STATE
            {
                static const AkUniqueID FOREST = 491961918U;
                static const AkUniqueID QUIET = 1565680351U;
                static const AkUniqueID WIND = 1537061107U;
            } // namespace STATE
        } // namespace ENV_LVL1

        namespace PLAYERLIFE
        {
            static const AkUniqueID GROUP = 444815956U;

            namespace STATE
            {
                static const AkUniqueID ALIVE = 655265632U;
                static const AkUniqueID DEAD = 2044049779U;
            } // namespace STATE
        } // namespace PLAYERLIFE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace ENV_LVL1
        {
            static const AkUniqueID GROUP = 2478762362U;

            namespace SWITCH
            {
                static const AkUniqueID FOREST = 491961918U;
                static const AkUniqueID QUIET = 1565680351U;
                static const AkUniqueID WIND = 1537061107U;
            } // namespace SWITCH
        } // namespace ENV_LVL1

        namespace MATERIAL
        {
            static const AkUniqueID GROUP = 3865314626U;

            namespace SWITCH
            {
                static const AkUniqueID MUD = 712897245U;
                static const AkUniqueID SAND = 803837735U;
                static const AkUniqueID STONE = 1216965916U;
            } // namespace SWITCH
        } // namespace MATERIAL

    } // namespace SWITCHES

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
