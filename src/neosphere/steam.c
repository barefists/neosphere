// WARNING: This file is auto-generated. Do not edit.
// Generator script is located at scripts/generate_steam_bindings.py

#include "neosphere.h"
#include "pegasus.h"
#include "api.h"
#include "steam.h"
#include "jsal.h"

static bool js_SteamAPI_Init                                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_SteamAPI_Shutdown                                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_SteamAPI_RunCallbacks                                           (int num_args, bool is_ctor, intptr_t magic);

// ISteamUser
static bool js_ISteamUser_GetHSteamUser                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetGameBadgeLevel                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetPlayerSteamLevel                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BLoggedOn                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetUserDataFolder                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsBehindNAT                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneVerified                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsTwoFactorEnabled                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneIdentifying                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneRequiringVerification                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BSetDurationControlOnlineState                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetSteamID                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_RequestStoreAuthURL                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetMarketEligibility                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetDurationControl                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_TrackAppUsageEvent                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_StartVoiceRecording                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_StopVoiceRecording                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_EndAuthSession                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_CancelAuthTicket                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_AdvertiseGame                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetVoiceOptimalSampleRate                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetAuthTicketForWebApi                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_UserHasLicenseForApp                                 (int num_args, bool is_ctor, intptr_t magic);

// ISteamFriends
static bool js_ISteamFriends_GetPersonaName                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaNameHistory                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetPlayerNickname                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupName                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanName                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresence                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresenceKeyByIndex                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetProfileItemPropertyString                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetPersonaName                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendByIndex                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanByIndex                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_DownloadClanActivityCounts                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendFromSourceByIndex                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestClanOfficerList                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOwner                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOfficerByIndex                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetCoplayFriend                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_JoinClanChatRoom                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetChatMemberByIndex                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFollowerCount                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsFollowing                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_EnumerateFollowingList                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestEquippedProfileItems                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetPersonaState                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRelationship                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaState                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetUserRestrictions                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCoplayGame                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetProfileItemPropertyUint                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCount                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendSteamLevel                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupCount                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupMembersCount                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanCount                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCountFromSource                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetSmallFriendAvatar                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetMediumFriendAvatar                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetLargeFriendAvatar                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOfficerCount                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresenceKeyCount                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetCoplayFriendCount                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCoplayTime                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanChatMemberCount                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendGamePlayed                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_HasFriend                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanActivityCounts                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsUserInSource                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestUserInformation                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetRichPresence                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_InviteUserToGame                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_LeaveClanChatRoom                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SendClanChatMessage                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanChatAdmin                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanChatWindowOpenInSteam                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_OpenClanChatWindowInSteam                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_CloseClanChatWindowInSteam                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetListenForFriendsMessages                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ReplyToFriendMessage                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanPublic                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanOfficialGameGroup                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RegisterProtocolInOverlayBrowser                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_BHasEquippedProfileItem                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupIDByIndex                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupMembersList                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetInGameVoiceSpeaking                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlay                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToUser                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToWebPage                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToStore                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetPlayedWith                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayInviteDialog                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ClearRichPresence                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestFriendRichPresence                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString      (int num_args, bool is_ctor, intptr_t magic);

// ISteamUtils
static bool js_ISteamUtils_GetSecondsSinceAppActive                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetSecondsSinceComputerActive                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetConnectedUniverse                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetServerRealTime                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetAppID                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetAPICallFailureReason                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPCCallCount                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetEnteredGamepadTextLength                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPv6ConnectivityState                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPCountry                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetSteamUILanguage                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetImageSize                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetImageRGBA                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsAPICallCompleted                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsOverlayEnabled                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_BOverlayNeedsPresent                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_ShowGamepadTextInput                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetEnteredGamepadTextInput                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamRunningInVR                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamInBigPictureMode                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsVRHeadsetStreamingEnabled                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamChinaLauncher                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_InitFilterText                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamRunningOnSteamDeck                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_ShowFloatingGamepadTextInput                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_DismissFloatingGamepadTextInput                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetCurrentBatteryPower                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetOverlayNotificationPosition                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetOverlayNotificationInset                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_StartVRDashboard                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetVRHeadsetStreamingEnabled                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetGameLauncherMode                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_CheckFileSignature                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_FilterText                                          (int num_args, bool is_ctor, intptr_t magic);

// ISteamUserStats
static bool js_ISteamUserStats_RequestCurrentStats                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetStatInt32                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetStatFloat                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetStatInt32                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetStatFloat                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_UpdateAvgRateStat                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievement                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetAchievement                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_ClearAchievement                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementAndUnlockTime                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_StoreStats                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_IndicateAchievementProgress                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserStatInt32                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserStatFloat                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserAchievement                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserAchievementAndUnlockTime                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_ResetAllStats                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetDownloadedLeaderboardEntry                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementAchievedPercent                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatInt64                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatDouble                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementProgressLimitsInt32               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementProgressLimitsFloat               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementIcon                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardEntryCount                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetMostAchievedAchievementInfo                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetNextMostAchievedAchievementInfo              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatHistoryInt64                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatHistoryDouble                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementDisplayAttribute                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetNumAchievements                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardSortMethod                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardDisplayType                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_RequestUserStats                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_FindOrCreateLeaderboard                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_FindLeaderboard                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_DownloadLeaderboardEntries                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_DownloadLeaderboardEntriesForUsers              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_UploadLeaderboardScore                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_AttachLeaderboardUGC                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetNumberOfCurrentPlayers                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_RequestGlobalAchievementPercentages             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_RequestGlobalStats                              (int num_args, bool is_ctor, intptr_t magic);

// ISteamApps
static bool js_ISteamApps_BIsSubscribed                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsLowViolence                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsCybercafe                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsVACBanned                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedApp                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsDlcInstalled                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedFromFreeWeekend                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BGetDLCDataByIndex                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetCurrentBetaName                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_MarkContentCorrupt                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsAppInstalled                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetDlcDownloadProgress                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedFromFamilySharing                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsTimedTrial                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_SetDlcContext                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetCurrentGameLanguage                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAvailableGameLanguages                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetLaunchQueryParam                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetEarliestPurchaseUnixTime                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetInstalledDepots                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppInstallDir                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetDLCCount                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppBuildId                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetLaunchCommandLine                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_InstallDLC                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_UninstallDLC                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_RequestAppProofOfPurchaseKey                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_RequestAllProofOfPurchaseKeys                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppOwner                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetFileDetails                                       (int num_args, bool is_ctor, intptr_t magic);

// ISteamInput
static bool js_ISteamInput_Init                                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Shutdown                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_SetInputActionManifestFilePath                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_BWaitForData                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_BNewDataAvailable                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ShowBindingPanel                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDeviceBindingRevision                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_RunFrame                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_EnableDeviceCallbacks                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ActivateActionSet                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ActivateActionSetLayer                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_DeactivateActionSetLayer                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_DeactivateAllActionSetLayers                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_StopAnalogActionMomentum                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerVibration                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerVibrationExtended                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerSimpleHapticEvent                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_SetLEDColor                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Legacy_TriggerHapticPulse                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Legacy_TriggerRepeatedHapticPulse                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetConnectedControllers                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActiveActionSetLayers                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionOrigins                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionOrigins                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGamepadIndexForController                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActionSetHandle                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetCurrentActionSet                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionHandle                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionHandle                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetControllerForGamepadIndex                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionData                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForDigitalActionName                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphPNGForActionOrigin                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphSVGForActionOrigin                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphForActionOrigin_Legacy                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForActionOrigin                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForAnalogActionName                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForXboxOrigin                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphForXboxOrigin                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionData                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetMotionData                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetInputTypeForHandle                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActionOriginFromXboxOrigin                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TranslateActionOrigin                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetRemotePlaySessionID                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetSessionInputConfigurationSettings                (int num_args, bool is_ctor, intptr_t magic);

// ISteamUGC
static bool js_ISteamUGC_CreateQueryUserUGCRequest                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_CreateQueryAllUGCRequestPage                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_CreateQueryAllUGCRequestCursor                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_CreateQueryUGCDetailsRequest                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SendQueryUGCRequest                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_CreateItem                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_StartItemUpdate                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SubmitItemUpdate                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetUserItemVote                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetUserItemVote                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddItemToFavorites                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveItemFromFavorites                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SubscribeItem                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_UnsubscribeItem                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_StartPlaytimeTracking                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_StopPlaytimeTracking                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_StopPlaytimeTrackingForAllItems                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddDependency                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveDependency                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddAppDependency                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveAppDependency                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetAppDependencies                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_DeleteItem                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetWorkshopEULAStatus                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCResult                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCTagDisplayName                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCPreviewURL                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCMetadata                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCChildren                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCStatistic                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCAdditionalPreview                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCKeyValueTag                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryFirstUGCKeyValueTag                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_ReleaseQueryUGCRequest                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddRequiredTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddRequiredTagGroup                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddExcludedTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnOnlyIDs                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnKeyValueTags                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnLongDescription                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnMetadata                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnChildren                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnAdditionalPreviews                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnTotalOnly                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetReturnPlaytimeStats                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetLanguage                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetAllowCachedResponse                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetCloudFileNameFilter                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetMatchAnyTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetSearchText                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetRankedByTrendDays                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetTimeCreatedDateRange                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetTimeUpdatedDateRange                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddRequiredKeyValueTag                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemTitle                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemDescription                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemUpdateLanguage                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemMetadata                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemVisibility                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemTags                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemContent                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetItemPreview                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SetAllowLegacyUpload                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveAllItemKeyValueTags                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveItemKeyValueTags                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddItemKeyValueTag                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddItemPreviewFile                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddItemPreviewVideo                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_UpdateItemPreviewFile                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_UpdateItemPreviewVideo                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveItemPreview                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_AddContentDescriptor                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_RemoveContentDescriptor                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetItemInstallInfo                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetItemDownloadInfo                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_DownloadItem                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_BInitWorkshopForGameServer                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_ShowWorkshopEULA                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCNumTags                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCNumAdditionalPreviews                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCNumKeyValueTags                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetQueryUGCContentDescriptors                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetItemUpdateProgress                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetNumSubscribedItems                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetSubscribedItems                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetItemState                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_GetUserContentDescriptorPreferences                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUGC_SuspendDownloads                                      (int num_args, bool is_ctor, intptr_t magic);


uint64_t
require_str_to_uint64_t(int index)
{
	const char * str = jsal_require_string(index);
	const char ** str_end = NULL;
	return strtoull(str, str_end, 10);
}

int64_t
require_str_to_int64_t(int index)
{
	const char * str = jsal_require_string(index);
	const char ** str_end = NULL;
	return strtoll(str, str_end, 10);
}

char push_buffer[32];
void
push_uint64_t_to_str(uint64_t v)
{
	snprintf(push_buffer, sizeof(push_buffer), "%" PRIu64, v);
	jsal_push_string(push_buffer);
}

void
push_int64_t_to_str(int64_t v)
{
	snprintf(push_buffer, sizeof(push_buffer), "%" PRId64, v);
	jsal_push_string(push_buffer);
}
void
steamapi_init(void)
{
	api_define_const("Steam", "k_uAppIdInvalid", 0x0);
	api_define_const("Steam", "k_uDepotIdInvalid", 0x0);
	api_define_const("Steam", "k_HAuthTicketInvalid", 0);
	api_define_const("Steam", "k_unSteamAccountIDMask", 0xFFFFFFFF);
	api_define_const("Steam", "k_unSteamAccountInstanceMask", 0x000FFFFF);
	api_define_const("Steam", "k_unSteamUserDefaultInstance", 1);
	api_define_const("Steam", "k_cubChatMetadataMax", 8192);
	api_define_const("Steam", "k_unFavoriteFlagNone", 0x00);
	api_define_const("Steam", "k_unFavoriteFlagFavorite", 0x01);
	api_define_const("Steam", "k_unFavoriteFlagHistory", 0x02);
	api_define_const("Steam", "k_unMaxCloudFileChunkSize", 100*1024*1024);
	api_define_const("Steam", "k_cchPublishedDocumentTitleMax", 128+1);
	api_define_const("Steam", "k_cchPublishedDocumentDescriptionMax", 8000);
	api_define_const("Steam", "k_cchPublishedDocumentChangeDescriptionMax", 8000);
	api_define_const("Steam", "k_unEnumeratePublishedFilesMaxResults", 50);
	api_define_const("Steam", "k_cchTagListMax", 1024+1);
	api_define_const("Steam", "k_cchFilenameMax", 260);
	api_define_const("Steam", "k_cchPublishedFileURLMax", 256);
	api_define_const("Steam", "k_nScreenshotMaxTaggedUsers", 32);
	api_define_const("Steam", "k_nScreenshotMaxTaggedPublishedFiles", 32);
	api_define_const("Steam", "kNumUGCResultsPerPage", 50);
	api_define_const("Steam", "k_cchDeveloperMetadataMax", 5000);
	api_define_const("Steam", "INVALID_HTMLBROWSER", 0);
	api_define_const("Steam", "k_HSteamNetConnection_Invalid", 0);
	api_define_const("Steam", "k_HSteamListenSocket_Invalid", 0);
	api_define_const("Steam", "k_HSteamNetPollGroup_Invalid", 0);
	api_define_const("Steam", "k_SteamDatagramPOPID_dev", ((uint32_t)'d'<<16U)|((uint32_t)'e'<<8U)|(uint32_t)'v');
	api_define_const("Steam", "k_cbSteamDatagramMaxSerializedTicket", 512);
	api_define_const("Steam", "k_cbMaxSteamDatagramGameCoordinatorServerLoginAppData", 2048);
	api_define_const("Steam", "k_cbMaxSteamDatagramGameCoordinatorServerLoginSerialized", 4096);
	api_define_const("Steam", "k_uAPICallInvalid", 0x0);
	api_define_const("Steam", "k_ulPartyBeaconIdInvalid", 0);
	api_define_const("Steam", "k_PublishedFileIdInvalid", 0);
	api_define_const("Steam", "k_UGCHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_PublishedFileUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCFileStreamHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCQueryHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_SteamItemInstanceIDInvalid", (uint64_t)~0);
	api_define_const("Steam", "k_SteamInventoryUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_cchGameExtraInfoMax", 64);
	api_define_const("Steam", "k_cchMaxSteamErrMsg", 1024);
	api_define_const("Steam", "k_cchMaxFriendsGroupName", 64);
	api_define_const("Steam", "k_cFriendsGroupLimit", 100);
	api_define_const("Steam", "k_cEnumerateFollowersMax", 50);
	api_define_const("Steam", "k_cbMaxGameServerGameDir", 32);
	api_define_const("Steam", "k_cbMaxGameServerMapName", 32);
	api_define_const("Steam", "k_cbMaxGameServerGameDescription", 64);
	api_define_const("Steam", "k_cbMaxGameServerName", 64);
	api_define_const("Steam", "k_cbMaxGameServerTags", 128);
	api_define_const("Steam", "k_cbMaxGameServerGameData", 2048);
	api_define_const("Steam", "HSERVERQUERY_INVALID", 0xffffffff);
	api_define_const("Steam", "k_cubAppProofOfPurchaseKeyMax", 240);
	api_define_const("Steam", "k_cubUFSTagTypeMax", 255);
	api_define_const("Steam", "k_cubUFSTagValueMax", 255);
	api_define_const("Steam", "k_ScreenshotThumbWidth", 200);
	api_define_const("Steam", "k_SteamInventoryResultInvalid", -1);
	api_define_const("Steam", "k_nMaxTimelineRangeIDLength", 64);
	api_define_const("Steam", "k_cchMaxSteamNetworkingErrMsg", 1024);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionCloseReason", 128);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionDescription", 128);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionAppName", 32);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Unauthenticated", 1);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Unencrypted", 2);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_LoopbackBuffers", 4);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Fast", 8);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Relayed", 16);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_DualWifi", 32);
	api_define_const("Steam", "k_cbMaxSteamNetworkingSocketsMessageSizeSend", 512*1024);
	api_define_const("Steam", "k_nSteamNetworkingSend_Unreliable", 0);
	api_define_const("Steam", "k_nSteamNetworkingSend_NoNagle", 1);
	api_define_const("Steam", "k_nSteamNetworkingSend_UnreliableNoNagle", 0|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_NoDelay", 4);
	api_define_const("Steam", "k_nSteamNetworkingSend_UnreliableNoDelay", 0|4|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_Reliable", 8);
	api_define_const("Steam", "k_nSteamNetworkingSend_ReliableNoNagle", 8|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_UseCurrentThread", 16);
	api_define_const("Steam", "k_nSteamNetworkingSend_AutoRestartBrokenSession", 32);
	api_define_const("Steam", "k_cchMaxSteamNetworkingPingLocationString", 1024);
	api_define_const("Steam", "k_nSteamNetworkingPing_Failed", -1);
	api_define_const("Steam", "k_nSteamNetworkingPing_Unknown", -2);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Default", -1);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Disable", 0);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Relay", 1);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Private", 2);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Public", 4);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_All", 0x7fffffff);
	api_define_const("Steam", "k_cbSteamNetworkingSocketsFakeUDPPortRecommendedMTU", 1200);
	api_define_const("Steam", "k_cbSteamNetworkingSocketsFakeUDPPortMaxMessageSize", 4096);
	api_define_const("Steam", "k_FriendsGroupID_Invalid", -1);
	api_define_const("Steam", "STEAMGAMESERVER_QUERY_PORT_SHARED", 0xffff);
	api_define_const("Steam", "MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE", 0xffff);

	// Enum EUserHasLicenseForAppResult
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultHasLicense", 0);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultDoesNotHaveLicense", 1);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultNoAuth", 2);

	// Enum EDurationControlOnlineState
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Invalid", 0);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Offline", 1);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Online", 2);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_OnlineHighPri", 3);

	// Enum EPersonaState
	api_define_const("EPersonaState", "k_EPersonaStateOffline", 0);
	api_define_const("EPersonaState", "k_EPersonaStateOnline", 1);
	api_define_const("EPersonaState", "k_EPersonaStateBusy", 2);
	api_define_const("EPersonaState", "k_EPersonaStateAway", 3);
	api_define_const("EPersonaState", "k_EPersonaStateSnooze", 4);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToTrade", 5);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToPlay", 6);
	api_define_const("EPersonaState", "k_EPersonaStateInvisible", 7);
	api_define_const("EPersonaState", "k_EPersonaStateMax", 8);

	// Enum EFriendRelationship
	api_define_const("EFriendRelationship", "k_EFriendRelationshipNone", 0);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipBlocked", 1);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestRecipient", 2);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipFriend", 3);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestInitiator", 4);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnored", 5);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnoredFriend", 6);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipSuggested_DEPRECATED", 7);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipMax", 8);

	// Enum EActivateGameOverlayToWebPageMode
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Default", 0);
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Modal", 1);

	// Enum EOverlayToStoreFlag
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_None", 0);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCart", 1);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCartAndShow", 2);

	// Enum ECommunityProfileItemType
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AnimatedAvatar", 0);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AvatarFrame", 1);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileModifier", 2);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileBackground", 3);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_MiniProfileBackground", 4);

	// Enum ECommunityProfileItemProperty
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_ImageSmall", 0);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_ImageLarge", 1);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_InternalName", 2);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Title", 3);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Description", 4);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_AppID", 5);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_TypeID", 6);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Class", 7);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieWebM", 8);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieMP4", 9);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieWebMSmall", 10);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieMP4Small", 11);

	// Enum EUniverse
	api_define_const("EUniverse", "k_EUniverseInvalid", 0);
	api_define_const("EUniverse", "k_EUniversePublic", 1);
	api_define_const("EUniverse", "k_EUniverseBeta", 2);
	api_define_const("EUniverse", "k_EUniverseInternal", 3);
	api_define_const("EUniverse", "k_EUniverseDev", 4);
	api_define_const("EUniverse", "k_EUniverseMax", 5);

	// Enum ENotificationPosition
	api_define_const("ENotificationPosition", "k_EPositionInvalid", -1);
	api_define_const("ENotificationPosition", "k_EPositionTopLeft", 0);
	api_define_const("ENotificationPosition", "k_EPositionTopRight", 1);
	api_define_const("ENotificationPosition", "k_EPositionBottomLeft", 2);
	api_define_const("ENotificationPosition", "k_EPositionBottomRight", 3);

	// Enum ESteamAPICallFailure
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNone", -1);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureSteamGone", 0);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNetworkFailure", 1);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureInvalidHandle", 2);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureMismatchedCallback", 3);

	// Enum EGamepadTextInputMode
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModeNormal", 0);
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModePassword", 1);

	// Enum EGamepadTextInputLineMode
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeSingleLine", 0);
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeMultipleLines", 1);

	// Enum ETextFilteringContext
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextUnknown", 0);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextGameContent", 1);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextChat", 2);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextName", 3);

	// Enum ESteamIPv6ConnectivityProtocol
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_Invalid", 0);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_HTTP", 1);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_UDP", 2);

	// Enum ESteamIPv6ConnectivityState
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Unknown", 0);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Good", 1);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Bad", 2);

	// Enum EFloatingGamepadTextInputMode
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeSingleLine", 0);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeMultipleLines", 1);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeEmail", 2);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeNumeric", 3);

	// Enum ELeaderboardSortMethod
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodNone", 0);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodAscending", 1);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodDescending", 2);

	// Enum ELeaderboardDisplayType
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNone", 0);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNumeric", 1);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeSeconds", 2);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeMilliSeconds", 3);

	// Enum ELeaderboardDataRequest
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestGlobal", 0);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestGlobalAroundUser", 1);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestFriends", 2);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestUsers", 3);

	// Enum ELeaderboardUploadScoreMethod
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodNone", 0);
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodKeepBest", 1);
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodForceUpdate", 2);

	// Enum EInputActionOrigin
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_None", 0);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_A", 1);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_B", 2);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_X", 3);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Y", 4);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftBumper", 5);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightBumper", 6);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftGrip", 7);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightGrip", 8);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Start", 9);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Back", 10);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Touch", 11);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Swipe", 12);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Click", 13);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadNorth", 14);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadSouth", 15);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadWest", 16);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadEast", 17);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Touch", 18);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Swipe", 19);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Click", 20);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadNorth", 21);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadSouth", 22);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadWest", 23);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadEast", 24);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftTrigger_Pull", 25);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftTrigger_Click", 26);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightTrigger_Pull", 27);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightTrigger_Click", 28);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_Move", 29);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_Click", 30);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadNorth", 31);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadSouth", 32);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadWest", 33);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadEast", 34);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Move", 35);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Pitch", 36);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Yaw", 37);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Roll", 38);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved0", 39);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved1", 40);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved2", 41);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved3", 42);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved4", 43);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved5", 44);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved6", 45);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved7", 46);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved8", 47);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved9", 48);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved10", 49);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_X", 50);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Circle", 51);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Triangle", 52);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Square", 53);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftBumper", 54);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightBumper", 55);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Options", 56);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Share", 57);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Touch", 58);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Swipe", 59);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Click", 60);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadNorth", 61);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadSouth", 62);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadWest", 63);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadEast", 64);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Touch", 65);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Swipe", 66);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Click", 67);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadNorth", 68);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadSouth", 69);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadWest", 70);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadEast", 71);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Touch", 72);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Swipe", 73);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Click", 74);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadNorth", 75);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadSouth", 76);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadWest", 77);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadEast", 78);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftTrigger_Pull", 79);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftTrigger_Click", 80);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightTrigger_Pull", 81);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightTrigger_Click", 82);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_Move", 83);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_Click", 84);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadNorth", 85);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadSouth", 86);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadWest", 87);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadEast", 88);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_Move", 89);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_Click", 90);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadNorth", 91);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadSouth", 92);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadWest", 93);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadEast", 94);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_North", 95);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_South", 96);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_West", 97);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_East", 98);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Move", 99);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Pitch", 100);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Yaw", 101);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Roll", 102);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_Move", 103);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved1", 104);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved2", 105);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved3", 106);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved4", 107);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved5", 108);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved6", 109);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved7", 110);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved8", 111);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved9", 112);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved10", 113);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_A", 114);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_B", 115);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_X", 116);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Y", 117);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftBumper", 118);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightBumper", 119);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Menu", 120);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_View", 121);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull", 122);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftTrigger_Click", 123);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightTrigger_Pull", 124);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightTrigger_Click", 125);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_Move", 126);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_Click", 127);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth", 128);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth", 129);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest", 130);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast", 131);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_Move", 132);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_Click", 133);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth", 134);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth", 135);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadWest", 136);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadEast", 137);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_North", 138);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_South", 139);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_West", 140);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_East", 141);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_Move", 142);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftGrip_Lower", 143);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftGrip_Upper", 144);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightGrip_Lower", 145);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightGrip_Upper", 146);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Share", 147);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved6", 148);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved7", 149);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved8", 150);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved9", 151);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved10", 152);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_A", 153);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_B", 154);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_X", 155);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Y", 156);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftBumper", 157);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightBumper", 158);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Start", 159);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Back", 160);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftTrigger_Pull", 161);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftTrigger_Click", 162);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightTrigger_Pull", 163);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightTrigger_Click", 164);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_Move", 165);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_Click", 166);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadNorth", 167);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadSouth", 168);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadWest", 169);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadEast", 170);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_Move", 171);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_Click", 172);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadNorth", 173);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadSouth", 174);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadWest", 175);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadEast", 176);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_North", 177);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_South", 178);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_West", 179);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_East", 180);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_Move", 181);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved1", 182);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved2", 183);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved3", 184);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved4", 185);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved5", 186);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved6", 187);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved7", 188);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved8", 189);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved9", 190);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved10", 191);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_A", 192);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_B", 193);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_X", 194);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Y", 195);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftBumper", 196);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightBumper", 197);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Plus", 198);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Minus", 199);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Capture", 200);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftTrigger_Pull", 201);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftTrigger_Click", 202);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightTrigger_Pull", 203);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightTrigger_Click", 204);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_Move", 205);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_Click", 206);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadNorth", 207);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadSouth", 208);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadWest", 209);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadEast", 210);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_Move", 211);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_Click", 212);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadNorth", 213);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadSouth", 214);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadWest", 215);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadEast", 216);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_North", 217);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_South", 218);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_West", 219);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_East", 220);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Move", 221);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Pitch", 222);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Yaw", 223);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Roll", 224);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_Move", 225);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved1", 226);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved2", 227);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved3", 228);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved4", 229);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved5", 230);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved6", 231);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved7", 232);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved8", 233);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved9", 234);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved10", 235);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Move", 236);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Pitch", 237);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Yaw", 238);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Roll", 239);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Move", 240);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Pitch", 241);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Yaw", 242);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Roll", 243);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGrip_Lower", 244);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGrip_Upper", 245);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGrip_Lower", 246);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGrip_Upper", 247);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_N", 248);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_E", 249);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_S", 250);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_W", 251);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved15", 252);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved16", 253);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved17", 254);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved18", 255);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved19", 256);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved20", 257);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_X", 258);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Circle", 259);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Triangle", 260);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Square", 261);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftBumper", 262);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightBumper", 263);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Option", 264);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Create", 265);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Mute", 266);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Touch", 267);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Swipe", 268);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Click", 269);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadNorth", 270);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadSouth", 271);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadWest", 272);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadEast", 273);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Touch", 274);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Swipe", 275);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Click", 276);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadNorth", 277);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadSouth", 278);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadWest", 279);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadEast", 280);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Touch", 281);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Swipe", 282);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Click", 283);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadNorth", 284);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadSouth", 285);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadWest", 286);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadEast", 287);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftTrigger_Pull", 288);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftTrigger_Click", 289);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightTrigger_Pull", 290);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightTrigger_Click", 291);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_Move", 292);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_Click", 293);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadNorth", 294);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadSouth", 295);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadWest", 296);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadEast", 297);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_Move", 298);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_Click", 299);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadNorth", 300);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadSouth", 301);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadWest", 302);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadEast", 303);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_North", 304);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_South", 305);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_West", 306);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_East", 307);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Move", 308);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Pitch", 309);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Yaw", 310);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Roll", 311);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_Move", 312);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftGrip", 313);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightGrip", 314);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftFn", 315);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightFn", 316);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved5", 317);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved6", 318);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved7", 319);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved8", 320);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved9", 321);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved10", 322);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved11", 323);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved12", 324);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved13", 325);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved14", 326);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved15", 327);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved16", 328);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved17", 329);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved18", 330);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved19", 331);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved20", 332);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_A", 333);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_B", 334);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_X", 335);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Y", 336);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L1", 337);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R1", 338);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Menu", 339);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_View", 340);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Touch", 341);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Swipe", 342);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Click", 343);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadNorth", 344);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadSouth", 345);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadWest", 346);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadEast", 347);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Touch", 348);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Swipe", 349);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Click", 350);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadNorth", 351);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadSouth", 352);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadWest", 353);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadEast", 354);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L2_SoftPull", 355);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L2", 356);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R2_SoftPull", 357);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R2", 358);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_Move", 359);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L3", 360);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadNorth", 361);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadSouth", 362);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadWest", 363);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadEast", 364);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_Touch", 365);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_Move", 366);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R3", 367);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadNorth", 368);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadSouth", 369);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadWest", 370);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadEast", 371);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_Touch", 372);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L4", 373);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R4", 374);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L5", 375);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R5", 376);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_Move", 377);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_North", 378);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_South", 379);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_West", 380);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_East", 381);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Move", 382);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Pitch", 383);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Yaw", 384);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Roll", 385);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved1", 386);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved2", 387);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved3", 388);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved4", 389);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved5", 390);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved6", 391);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved7", 392);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved8", 393);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved9", 394);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved10", 395);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved11", 396);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved12", 397);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved13", 398);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved14", 399);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved15", 400);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved16", 401);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved17", 402);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved18", 403);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved19", 404);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved20", 405);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Count", 406);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_MaximumPossibleValue", 32767);

	// Enum ESteamInputGlyphSize
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Small", 0);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Medium", 1);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Large", 2);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Count", 3);

	// Enum EControllerHapticLocation
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Left", 1);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Right", 2);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Both", 3);

	// Enum ESteamControllerPad
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Left", 0);
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Right", 1);

	// Enum ESteamInputType
	api_define_const("ESteamInputType", "k_ESteamInputType_Unknown", 0);
	api_define_const("ESteamInputType", "k_ESteamInputType_SteamController", 1);
	api_define_const("ESteamInputType", "k_ESteamInputType_XBox360Controller", 2);
	api_define_const("ESteamInputType", "k_ESteamInputType_XBoxOneController", 3);
	api_define_const("ESteamInputType", "k_ESteamInputType_GenericGamepad", 4);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS4Controller", 5);
	api_define_const("ESteamInputType", "k_ESteamInputType_AppleMFiController", 6);
	api_define_const("ESteamInputType", "k_ESteamInputType_AndroidController", 7);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchJoyConPair", 8);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchJoyConSingle", 9);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchProController", 10);
	api_define_const("ESteamInputType", "k_ESteamInputType_MobileTouch", 11);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS3Controller", 12);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS5Controller", 13);
	api_define_const("ESteamInputType", "k_ESteamInputType_SteamDeckController", 14);
	api_define_const("ESteamInputType", "k_ESteamInputType_Count", 15);
	api_define_const("ESteamInputType", "k_ESteamInputType_MaximumPossibleValue", 255);

	// Enum EXboxOrigin
	api_define_const("EXboxOrigin", "k_EXboxOrigin_A", 0);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_B", 1);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_X", 2);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Y", 3);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftBumper", 4);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightBumper", 5);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Menu", 6);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_View", 7);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftTrigger_Pull", 8);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftTrigger_Click", 9);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightTrigger_Pull", 10);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightTrigger_Click", 11);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_Move", 12);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_Click", 13);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadNorth", 14);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadSouth", 15);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadWest", 16);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadEast", 17);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_Move", 18);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_Click", 19);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadNorth", 20);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadSouth", 21);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadWest", 22);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadEast", 23);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_North", 24);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_South", 25);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_West", 26);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_East", 27);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Count", 28);

	// Enum EUserUGCList
	api_define_const("EUserUGCList", "k_EUserUGCList_Published", 0);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedOn", 1);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedUp", 2);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedDown", 3);
	api_define_const("EUserUGCList", "k_EUserUGCList_WillVoteLater", 4);
	api_define_const("EUserUGCList", "k_EUserUGCList_Favorited", 5);
	api_define_const("EUserUGCList", "k_EUserUGCList_Subscribed", 6);
	api_define_const("EUserUGCList", "k_EUserUGCList_UsedOrPlayed", 7);
	api_define_const("EUserUGCList", "k_EUserUGCList_Followed", 8);

	// Enum EUGCMatchingUGCType
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items", 0);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items_Mtx", 1);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items_ReadyToUse", 2);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Collections", 3);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Artwork", 4);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Videos", 5);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Screenshots", 6);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_AllGuides", 7);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_WebGuides", 8);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_IntegratedGuides", 9);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_UsableInGame", 10);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_ControllerBindings", 11);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_GameManagedItems", 12);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_All", -1);

	// Enum EUserUGCListSortOrder
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_CreationOrderDesc", 0);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_CreationOrderAsc", 1);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_TitleAsc", 2);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_LastUpdatedDesc", 3);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_SubscriptionDateDesc", 4);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_VoteScoreDesc", 5);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_ForModeration", 6);

	// Enum EUGCQuery
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByVote", 0);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPublicationDate", 1);
	api_define_const("EUGCQuery", "k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate", 2);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTrend", 3);
	api_define_const("EUGCQuery", "k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate", 4);
	api_define_const("EUGCQuery", "k_EUGCQuery_CreatedByFriendsRankedByPublicationDate", 5);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByNumTimesReported", 6);
	api_define_const("EUGCQuery", "k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate", 7);
	api_define_const("EUGCQuery", "k_EUGCQuery_NotYetRated", 8);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalVotesAsc", 9);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByVotesUp", 10);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTextSearch", 11);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalUniqueSubscriptions", 12);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPlaytimeTrend", 13);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalPlaytime", 14);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByAveragePlaytimeTrend", 15);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLifetimeAveragePlaytime", 16);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPlaytimeSessionsTrend", 17);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLifetimePlaytimeSessions", 18);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLastUpdatedDate", 19);

	// Enum EItemStatistic
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSubscriptions", 0);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumFavorites", 1);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumFollowers", 2);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueSubscriptions", 3);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueFavorites", 4);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueFollowers", 5);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueWebsiteViews", 6);
	api_define_const("EItemStatistic", "k_EItemStatistic_ReportScore", 7);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSecondsPlayed", 8);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumPlaytimeSessions", 9);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumComments", 10);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSecondsPlayedDuringTimePeriod", 11);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod", 12);

	// Enum EItemPreviewType
	api_define_const("EItemPreviewType", "k_EItemPreviewType_Image", 0);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_YouTubeVideo", 1);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_Sketchfab", 2);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_EnvironmentMap_HorizontalCross", 3);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_EnvironmentMap_LatLong", 4);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_ReservedMax", 255);

	// Enum EUGCContentDescriptorID
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_NudityOrSexualContent", 1);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_FrequentViolenceOrGore", 2);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_AdultOnlySexualContent", 3);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_GratuitousSexualContent", 4);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_AnyMatureContent", 5);

	// Enum EWorkshopFileType
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeFirst", 0);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeCommunity", 0);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMicrotransaction", 1);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeCollection", 2);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeArt", 3);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeVideo", 4);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeScreenshot", 5);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeGame", 6);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSoftware", 7);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeConcept", 8);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeWebGuide", 9);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeIntegratedGuide", 10);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMerch", 11);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeControllerBinding", 12);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSteamworksAccessInvite", 13);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSteamVideo", 14);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeGameManagedItem", 15);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMax", 16);

	// Enum ERemoteStoragePublishedFileVisibility
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityPublic", 0);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityFriendsOnly", 1);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityPrivate", 2);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityUnlisted", 3);

	// Enum EItemUpdateStatus
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusInvalid", 0);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusPreparingConfig", 1);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusPreparingContent", 2);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusUploadingContent", 3);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusUploadingPreviewFile", 4);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusCommittingChanges", 5);

	// Enum EResult
	api_define_const("EResult", "k_EResultNone", 0);
	api_define_const("EResult", "k_EResultOK", 1);
	api_define_const("EResult", "k_EResultFail", 2);
	api_define_const("EResult", "k_EResultNoConnection", 3);
	api_define_const("EResult", "k_EResultInvalidPassword", 5);
	api_define_const("EResult", "k_EResultLoggedInElsewhere", 6);
	api_define_const("EResult", "k_EResultInvalidProtocolVer", 7);
	api_define_const("EResult", "k_EResultInvalidParam", 8);
	api_define_const("EResult", "k_EResultFileNotFound", 9);
	api_define_const("EResult", "k_EResultBusy", 10);
	api_define_const("EResult", "k_EResultInvalidState", 11);
	api_define_const("EResult", "k_EResultInvalidName", 12);
	api_define_const("EResult", "k_EResultInvalidEmail", 13);
	api_define_const("EResult", "k_EResultDuplicateName", 14);
	api_define_const("EResult", "k_EResultAccessDenied", 15);
	api_define_const("EResult", "k_EResultTimeout", 16);
	api_define_const("EResult", "k_EResultBanned", 17);
	api_define_const("EResult", "k_EResultAccountNotFound", 18);
	api_define_const("EResult", "k_EResultInvalidSteamID", 19);
	api_define_const("EResult", "k_EResultServiceUnavailable", 20);
	api_define_const("EResult", "k_EResultNotLoggedOn", 21);
	api_define_const("EResult", "k_EResultPending", 22);
	api_define_const("EResult", "k_EResultEncryptionFailure", 23);
	api_define_const("EResult", "k_EResultInsufficientPrivilege", 24);
	api_define_const("EResult", "k_EResultLimitExceeded", 25);
	api_define_const("EResult", "k_EResultRevoked", 26);
	api_define_const("EResult", "k_EResultExpired", 27);
	api_define_const("EResult", "k_EResultAlreadyRedeemed", 28);
	api_define_const("EResult", "k_EResultDuplicateRequest", 29);
	api_define_const("EResult", "k_EResultAlreadyOwned", 30);
	api_define_const("EResult", "k_EResultIPNotFound", 31);
	api_define_const("EResult", "k_EResultPersistFailed", 32);
	api_define_const("EResult", "k_EResultLockingFailed", 33);
	api_define_const("EResult", "k_EResultLogonSessionReplaced", 34);
	api_define_const("EResult", "k_EResultConnectFailed", 35);
	api_define_const("EResult", "k_EResultHandshakeFailed", 36);
	api_define_const("EResult", "k_EResultIOFailure", 37);
	api_define_const("EResult", "k_EResultRemoteDisconnect", 38);
	api_define_const("EResult", "k_EResultShoppingCartNotFound", 39);
	api_define_const("EResult", "k_EResultBlocked", 40);
	api_define_const("EResult", "k_EResultIgnored", 41);
	api_define_const("EResult", "k_EResultNoMatch", 42);
	api_define_const("EResult", "k_EResultAccountDisabled", 43);
	api_define_const("EResult", "k_EResultServiceReadOnly", 44);
	api_define_const("EResult", "k_EResultAccountNotFeatured", 45);
	api_define_const("EResult", "k_EResultAdministratorOK", 46);
	api_define_const("EResult", "k_EResultContentVersion", 47);
	api_define_const("EResult", "k_EResultTryAnotherCM", 48);
	api_define_const("EResult", "k_EResultPasswordRequiredToKickSession", 49);
	api_define_const("EResult", "k_EResultAlreadyLoggedInElsewhere", 50);
	api_define_const("EResult", "k_EResultSuspended", 51);
	api_define_const("EResult", "k_EResultCancelled", 52);
	api_define_const("EResult", "k_EResultDataCorruption", 53);
	api_define_const("EResult", "k_EResultDiskFull", 54);
	api_define_const("EResult", "k_EResultRemoteCallFailed", 55);
	api_define_const("EResult", "k_EResultPasswordUnset", 56);
	api_define_const("EResult", "k_EResultExternalAccountUnlinked", 57);
	api_define_const("EResult", "k_EResultPSNTicketInvalid", 58);
	api_define_const("EResult", "k_EResultExternalAccountAlreadyLinked", 59);
	api_define_const("EResult", "k_EResultRemoteFileConflict", 60);
	api_define_const("EResult", "k_EResultIllegalPassword", 61);
	api_define_const("EResult", "k_EResultSameAsPreviousValue", 62);
	api_define_const("EResult", "k_EResultAccountLogonDenied", 63);
	api_define_const("EResult", "k_EResultCannotUseOldPassword", 64);
	api_define_const("EResult", "k_EResultInvalidLoginAuthCode", 65);
	api_define_const("EResult", "k_EResultAccountLogonDeniedNoMail", 66);
	api_define_const("EResult", "k_EResultHardwareNotCapableOfIPT", 67);
	api_define_const("EResult", "k_EResultIPTInitError", 68);
	api_define_const("EResult", "k_EResultParentalControlRestricted", 69);
	api_define_const("EResult", "k_EResultFacebookQueryError", 70);
	api_define_const("EResult", "k_EResultExpiredLoginAuthCode", 71);
	api_define_const("EResult", "k_EResultIPLoginRestrictionFailed", 72);
	api_define_const("EResult", "k_EResultAccountLockedDown", 73);
	api_define_const("EResult", "k_EResultAccountLogonDeniedVerifiedEmailRequired", 74);
	api_define_const("EResult", "k_EResultNoMatchingURL", 75);
	api_define_const("EResult", "k_EResultBadResponse", 76);
	api_define_const("EResult", "k_EResultRequirePasswordReEntry", 77);
	api_define_const("EResult", "k_EResultValueOutOfRange", 78);
	api_define_const("EResult", "k_EResultUnexpectedError", 79);
	api_define_const("EResult", "k_EResultDisabled", 80);
	api_define_const("EResult", "k_EResultInvalidCEGSubmission", 81);
	api_define_const("EResult", "k_EResultRestrictedDevice", 82);
	api_define_const("EResult", "k_EResultRegionLocked", 83);
	api_define_const("EResult", "k_EResultRateLimitExceeded", 84);
	api_define_const("EResult", "k_EResultAccountLoginDeniedNeedTwoFactor", 85);
	api_define_const("EResult", "k_EResultItemDeleted", 86);
	api_define_const("EResult", "k_EResultAccountLoginDeniedThrottle", 87);
	api_define_const("EResult", "k_EResultTwoFactorCodeMismatch", 88);
	api_define_const("EResult", "k_EResultTwoFactorActivationCodeMismatch", 89);
	api_define_const("EResult", "k_EResultAccountAssociatedToMultiplePartners", 90);
	api_define_const("EResult", "k_EResultNotModified", 91);
	api_define_const("EResult", "k_EResultNoMobileDevice", 92);
	api_define_const("EResult", "k_EResultTimeNotSynced", 93);
	api_define_const("EResult", "k_EResultSmsCodeFailed", 94);
	api_define_const("EResult", "k_EResultAccountLimitExceeded", 95);
	api_define_const("EResult", "k_EResultAccountActivityLimitExceeded", 96);
	api_define_const("EResult", "k_EResultPhoneActivityLimitExceeded", 97);
	api_define_const("EResult", "k_EResultRefundToWallet", 98);
	api_define_const("EResult", "k_EResultEmailSendFailure", 99);
	api_define_const("EResult", "k_EResultNotSettled", 100);
	api_define_const("EResult", "k_EResultNeedCaptcha", 101);
	api_define_const("EResult", "k_EResultGSLTDenied", 102);
	api_define_const("EResult", "k_EResultGSOwnerDenied", 103);
	api_define_const("EResult", "k_EResultInvalidItemType", 104);
	api_define_const("EResult", "k_EResultIPBanned", 105);
	api_define_const("EResult", "k_EResultGSLTExpired", 106);
	api_define_const("EResult", "k_EResultInsufficientFunds", 107);
	api_define_const("EResult", "k_EResultTooManyPending", 108);
	api_define_const("EResult", "k_EResultNoSiteLicensesFound", 109);
	api_define_const("EResult", "k_EResultWGNetworkSendExceeded", 110);
	api_define_const("EResult", "k_EResultAccountNotFriends", 111);
	api_define_const("EResult", "k_EResultLimitedUserAccount", 112);
	api_define_const("EResult", "k_EResultCantRemoveItem", 113);
	api_define_const("EResult", "k_EResultAccountDeleted", 114);
	api_define_const("EResult", "k_EResultExistingUserCancelledLicense", 115);
	api_define_const("EResult", "k_EResultCommunityCooldown", 116);
	api_define_const("EResult", "k_EResultNoLauncherSpecified", 117);
	api_define_const("EResult", "k_EResultMustAgreeToSSA", 118);
	api_define_const("EResult", "k_EResultLauncherMigrated", 119);
	api_define_const("EResult", "k_EResultSteamRealmMismatch", 120);
	api_define_const("EResult", "k_EResultInvalidSignature", 121);
	api_define_const("EResult", "k_EResultParseFailure", 122);
	api_define_const("EResult", "k_EResultNoVerifiedPhone", 123);
	api_define_const("EResult", "k_EResultInsufficientBattery", 124);
	api_define_const("EResult", "k_EResultChargerRequired", 125);
	api_define_const("EResult", "k_EResultCachedCredentialInvalid", 126);
	api_define_const("EResult", "K_EResultPhoneNumberIsVOIP", 127);

	// Enum EMarketNotAllowedReasonFlags
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_None", 0);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_TemporaryFailure", 1);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountDisabled", 2);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountLockedDown", 4);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountLimited", 8);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_TradeBanned", 16);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountNotTrusted", 32);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_SteamGuardNotEnabled", 64);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled", 128);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_RecentPasswordReset", 256);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NewPaymentMethod", 512);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_InvalidCookie", 1024);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_UsingNewDevice", 2048);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_RecentSelfRefund", 4096);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified", 8192);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NoRecentPurchases", 16384);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AcceptedWalletGift", 32768);

	// Enum EDurationControlProgress
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_Full", 0);
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_Half", 1);
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_None", 2);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_3h", 3);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_5h", 4);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_Night", 5);

	// Enum EDurationControlNotification
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_None", 0);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_1Hour", 1);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_3Hours", 2);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_HalfProgress", 3);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_NoProgress", 4);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_3h", 5);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_5h", 6);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_Night", 7);

	// Enum EChatRoomEnterResponse
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseSuccess", 1);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseDoesntExist", 2);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseNotAllowed", 3);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseFull", 4);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseError", 5);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseBanned", 6);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseLimited", 7);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseClanDisabled", 8);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseCommunityBan", 9);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseMemberBlockedYou", 10);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseYouBlockedMember", 11);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseRatelimitExceeded", 15);

	// Enum ECheckFileSignature
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureInvalidSignature", 0);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureValidSignature", 1);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureFileNotFound", 2);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureNoSignaturesFoundForThisApp", 3);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureNoSignaturesFoundForThisFile", 4);

	// Enum EInputSourceMode
	api_define_const("EInputSourceMode", "k_EInputSourceMode_None", 0);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Dpad", 1);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Buttons", 2);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_FourButtons", 3);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_AbsoluteMouse", 4);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_RelativeMouse", 5);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickMove", 6);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickMouse", 7);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickCamera", 8);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_ScrollWheel", 9);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Trigger", 10);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_TouchMenu", 11);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_MouseJoystick", 12);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_MouseRegion", 13);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_RadialMenu", 14);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_SingleButton", 15);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Switches", 16);

	// API Init/Shutdown functions.
	api_define_func("SteamAPI", "Init", js_SteamAPI_Init, 0);
	api_define_func("SteamAPI", "Shutdown", js_SteamAPI_Shutdown, 0);
	api_define_func("SteamAPI", "RunCallbacks", js_SteamAPI_RunCallbacks, 0);

	// ISteamUser
	api_define_func("ISteamUser", "GetHSteamUser", js_ISteamUser_GetHSteamUser, 0);
	api_define_func("ISteamUser", "GetGameBadgeLevel", js_ISteamUser_GetGameBadgeLevel, 0);
	api_define_func("ISteamUser", "GetPlayerSteamLevel", js_ISteamUser_GetPlayerSteamLevel, 0);
	api_define_func("ISteamUser", "BLoggedOn", js_ISteamUser_BLoggedOn, 0);
	api_define_func("ISteamUser", "GetUserDataFolder", js_ISteamUser_GetUserDataFolder, 0);
	api_define_func("ISteamUser", "BIsBehindNAT", js_ISteamUser_BIsBehindNAT, 0);
	api_define_func("ISteamUser", "BIsPhoneVerified", js_ISteamUser_BIsPhoneVerified, 0);
	api_define_func("ISteamUser", "BIsTwoFactorEnabled", js_ISteamUser_BIsTwoFactorEnabled, 0);
	api_define_func("ISteamUser", "BIsPhoneIdentifying", js_ISteamUser_BIsPhoneIdentifying, 0);
	api_define_func("ISteamUser", "BIsPhoneRequiringVerification", js_ISteamUser_BIsPhoneRequiringVerification, 0);
	api_define_func("ISteamUser", "BSetDurationControlOnlineState", js_ISteamUser_BSetDurationControlOnlineState, 0);
	api_define_func("ISteamUser", "GetSteamID", js_ISteamUser_GetSteamID, 0);
	api_define_func("ISteamUser", "RequestStoreAuthURL", js_ISteamUser_RequestStoreAuthURL, 0);
	api_define_func("ISteamUser", "GetMarketEligibility", js_ISteamUser_GetMarketEligibility, 0);
	api_define_func("ISteamUser", "GetDurationControl", js_ISteamUser_GetDurationControl, 0);
	api_define_func("ISteamUser", "TrackAppUsageEvent", js_ISteamUser_TrackAppUsageEvent, 0);
	api_define_func("ISteamUser", "StartVoiceRecording", js_ISteamUser_StartVoiceRecording, 0);
	api_define_func("ISteamUser", "StopVoiceRecording", js_ISteamUser_StopVoiceRecording, 0);
	api_define_func("ISteamUser", "EndAuthSession", js_ISteamUser_EndAuthSession, 0);
	api_define_func("ISteamUser", "CancelAuthTicket", js_ISteamUser_CancelAuthTicket, 0);
	api_define_func("ISteamUser", "AdvertiseGame", js_ISteamUser_AdvertiseGame, 0);
	api_define_func("ISteamUser", "GetVoiceOptimalSampleRate", js_ISteamUser_GetVoiceOptimalSampleRate, 0);
	api_define_func("ISteamUser", "GetAuthTicketForWebApi", js_ISteamUser_GetAuthTicketForWebApi, 0);
	api_define_func("ISteamUser", "UserHasLicenseForApp", js_ISteamUser_UserHasLicenseForApp, 0);

	// ISteamFriends
	api_define_func("ISteamFriends", "GetPersonaName", js_ISteamFriends_GetPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaName", js_ISteamFriends_GetFriendPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaNameHistory", js_ISteamFriends_GetFriendPersonaNameHistory, 0);
	api_define_func("ISteamFriends", "GetPlayerNickname", js_ISteamFriends_GetPlayerNickname, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupName", js_ISteamFriends_GetFriendsGroupName, 0);
	api_define_func("ISteamFriends", "GetClanName", js_ISteamFriends_GetClanName, 0);
	api_define_func("ISteamFriends", "GetClanTag", js_ISteamFriends_GetClanTag, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresence", js_ISteamFriends_GetFriendRichPresence, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresenceKeyByIndex", js_ISteamFriends_GetFriendRichPresenceKeyByIndex, 0);
	api_define_func("ISteamFriends", "GetProfileItemPropertyString", js_ISteamFriends_GetProfileItemPropertyString, 0);
	api_define_func("ISteamFriends", "SetPersonaName", js_ISteamFriends_SetPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendByIndex", js_ISteamFriends_GetFriendByIndex, 0);
	api_define_func("ISteamFriends", "GetClanByIndex", js_ISteamFriends_GetClanByIndex, 0);
	api_define_func("ISteamFriends", "DownloadClanActivityCounts", js_ISteamFriends_DownloadClanActivityCounts, 0);
	api_define_func("ISteamFriends", "GetFriendFromSourceByIndex", js_ISteamFriends_GetFriendFromSourceByIndex, 0);
	api_define_func("ISteamFriends", "RequestClanOfficerList", js_ISteamFriends_RequestClanOfficerList, 0);
	api_define_func("ISteamFriends", "GetClanOwner", js_ISteamFriends_GetClanOwner, 0);
	api_define_func("ISteamFriends", "GetClanOfficerByIndex", js_ISteamFriends_GetClanOfficerByIndex, 0);
	api_define_func("ISteamFriends", "GetCoplayFriend", js_ISteamFriends_GetCoplayFriend, 0);
	api_define_func("ISteamFriends", "JoinClanChatRoom", js_ISteamFriends_JoinClanChatRoom, 0);
	api_define_func("ISteamFriends", "GetChatMemberByIndex", js_ISteamFriends_GetChatMemberByIndex, 0);
	api_define_func("ISteamFriends", "GetFollowerCount", js_ISteamFriends_GetFollowerCount, 0);
	api_define_func("ISteamFriends", "IsFollowing", js_ISteamFriends_IsFollowing, 0);
	api_define_func("ISteamFriends", "EnumerateFollowingList", js_ISteamFriends_EnumerateFollowingList, 0);
	api_define_func("ISteamFriends", "RequestEquippedProfileItems", js_ISteamFriends_RequestEquippedProfileItems, 0);
	api_define_func("ISteamFriends", "GetPersonaState", js_ISteamFriends_GetPersonaState, 0);
	api_define_func("ISteamFriends", "GetFriendRelationship", js_ISteamFriends_GetFriendRelationship, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaState", js_ISteamFriends_GetFriendPersonaState, 0);
	api_define_func("ISteamFriends", "GetUserRestrictions", js_ISteamFriends_GetUserRestrictions, 0);
	api_define_func("ISteamFriends", "GetFriendCoplayGame", js_ISteamFriends_GetFriendCoplayGame, 0);
	api_define_func("ISteamFriends", "GetProfileItemPropertyUint", js_ISteamFriends_GetProfileItemPropertyUint, 0);
	api_define_func("ISteamFriends", "GetFriendCount", js_ISteamFriends_GetFriendCount, 0);
	api_define_func("ISteamFriends", "GetFriendSteamLevel", js_ISteamFriends_GetFriendSteamLevel, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupCount", js_ISteamFriends_GetFriendsGroupCount, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupMembersCount", js_ISteamFriends_GetFriendsGroupMembersCount, 0);
	api_define_func("ISteamFriends", "GetClanCount", js_ISteamFriends_GetClanCount, 0);
	api_define_func("ISteamFriends", "GetFriendCountFromSource", js_ISteamFriends_GetFriendCountFromSource, 0);
	api_define_func("ISteamFriends", "GetSmallFriendAvatar", js_ISteamFriends_GetSmallFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetMediumFriendAvatar", js_ISteamFriends_GetMediumFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetLargeFriendAvatar", js_ISteamFriends_GetLargeFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetClanOfficerCount", js_ISteamFriends_GetClanOfficerCount, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresenceKeyCount", js_ISteamFriends_GetFriendRichPresenceKeyCount, 0);
	api_define_func("ISteamFriends", "GetCoplayFriendCount", js_ISteamFriends_GetCoplayFriendCount, 0);
	api_define_func("ISteamFriends", "GetFriendCoplayTime", js_ISteamFriends_GetFriendCoplayTime, 0);
	api_define_func("ISteamFriends", "GetClanChatMemberCount", js_ISteamFriends_GetClanChatMemberCount, 0);
	api_define_func("ISteamFriends", "GetNumChatsWithUnreadPriorityMessages", js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages, 0);
	api_define_func("ISteamFriends", "GetFriendGamePlayed", js_ISteamFriends_GetFriendGamePlayed, 0);
	api_define_func("ISteamFriends", "HasFriend", js_ISteamFriends_HasFriend, 0);
	api_define_func("ISteamFriends", "GetClanActivityCounts", js_ISteamFriends_GetClanActivityCounts, 0);
	api_define_func("ISteamFriends", "IsUserInSource", js_ISteamFriends_IsUserInSource, 0);
	api_define_func("ISteamFriends", "RequestUserInformation", js_ISteamFriends_RequestUserInformation, 0);
	api_define_func("ISteamFriends", "SetRichPresence", js_ISteamFriends_SetRichPresence, 0);
	api_define_func("ISteamFriends", "InviteUserToGame", js_ISteamFriends_InviteUserToGame, 0);
	api_define_func("ISteamFriends", "LeaveClanChatRoom", js_ISteamFriends_LeaveClanChatRoom, 0);
	api_define_func("ISteamFriends", "SendClanChatMessage", js_ISteamFriends_SendClanChatMessage, 0);
	api_define_func("ISteamFriends", "IsClanChatAdmin", js_ISteamFriends_IsClanChatAdmin, 0);
	api_define_func("ISteamFriends", "IsClanChatWindowOpenInSteam", js_ISteamFriends_IsClanChatWindowOpenInSteam, 0);
	api_define_func("ISteamFriends", "OpenClanChatWindowInSteam", js_ISteamFriends_OpenClanChatWindowInSteam, 0);
	api_define_func("ISteamFriends", "CloseClanChatWindowInSteam", js_ISteamFriends_CloseClanChatWindowInSteam, 0);
	api_define_func("ISteamFriends", "SetListenForFriendsMessages", js_ISteamFriends_SetListenForFriendsMessages, 0);
	api_define_func("ISteamFriends", "ReplyToFriendMessage", js_ISteamFriends_ReplyToFriendMessage, 0);
	api_define_func("ISteamFriends", "IsClanPublic", js_ISteamFriends_IsClanPublic, 0);
	api_define_func("ISteamFriends", "IsClanOfficialGameGroup", js_ISteamFriends_IsClanOfficialGameGroup, 0);
	api_define_func("ISteamFriends", "RegisterProtocolInOverlayBrowser", js_ISteamFriends_RegisterProtocolInOverlayBrowser, 0);
	api_define_func("ISteamFriends", "BHasEquippedProfileItem", js_ISteamFriends_BHasEquippedProfileItem, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupIDByIndex", js_ISteamFriends_GetFriendsGroupIDByIndex, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupMembersList", js_ISteamFriends_GetFriendsGroupMembersList, 0);
	api_define_func("ISteamFriends", "SetInGameVoiceSpeaking", js_ISteamFriends_SetInGameVoiceSpeaking, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlay", js_ISteamFriends_ActivateGameOverlay, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToUser", js_ISteamFriends_ActivateGameOverlayToUser, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToWebPage", js_ISteamFriends_ActivateGameOverlayToWebPage, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToStore", js_ISteamFriends_ActivateGameOverlayToStore, 0);
	api_define_func("ISteamFriends", "SetPlayedWith", js_ISteamFriends_SetPlayedWith, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayInviteDialog", js_ISteamFriends_ActivateGameOverlayInviteDialog, 0);
	api_define_func("ISteamFriends", "ClearRichPresence", js_ISteamFriends_ClearRichPresence, 0);
	api_define_func("ISteamFriends", "RequestFriendRichPresence", js_ISteamFriends_RequestFriendRichPresence, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayRemotePlayTogetherInviteDialog", js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayInviteDialogConnectString", js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString, 0);

	// ISteamUtils
	api_define_func("ISteamUtils", "GetSecondsSinceAppActive", js_ISteamUtils_GetSecondsSinceAppActive, 0);
	api_define_func("ISteamUtils", "GetSecondsSinceComputerActive", js_ISteamUtils_GetSecondsSinceComputerActive, 0);
	api_define_func("ISteamUtils", "GetConnectedUniverse", js_ISteamUtils_GetConnectedUniverse, 0);
	api_define_func("ISteamUtils", "GetServerRealTime", js_ISteamUtils_GetServerRealTime, 0);
	api_define_func("ISteamUtils", "GetAppID", js_ISteamUtils_GetAppID, 0);
	api_define_func("ISteamUtils", "GetAPICallFailureReason", js_ISteamUtils_GetAPICallFailureReason, 0);
	api_define_func("ISteamUtils", "GetIPCCallCount", js_ISteamUtils_GetIPCCallCount, 0);
	api_define_func("ISteamUtils", "GetEnteredGamepadTextLength", js_ISteamUtils_GetEnteredGamepadTextLength, 0);
	api_define_func("ISteamUtils", "GetIPv6ConnectivityState", js_ISteamUtils_GetIPv6ConnectivityState, 0);
	api_define_func("ISteamUtils", "GetIPCountry", js_ISteamUtils_GetIPCountry, 0);
	api_define_func("ISteamUtils", "GetSteamUILanguage", js_ISteamUtils_GetSteamUILanguage, 0);
	api_define_func("ISteamUtils", "GetImageSize", js_ISteamUtils_GetImageSize, 0);
	api_define_func("ISteamUtils", "GetImageRGBA", js_ISteamUtils_GetImageRGBA, 0);
	api_define_func("ISteamUtils", "IsAPICallCompleted", js_ISteamUtils_IsAPICallCompleted, 0);
	api_define_func("ISteamUtils", "IsOverlayEnabled", js_ISteamUtils_IsOverlayEnabled, 0);
	api_define_func("ISteamUtils", "BOverlayNeedsPresent", js_ISteamUtils_BOverlayNeedsPresent, 0);
	api_define_func("ISteamUtils", "ShowGamepadTextInput", js_ISteamUtils_ShowGamepadTextInput, 0);
	api_define_func("ISteamUtils", "GetEnteredGamepadTextInput", js_ISteamUtils_GetEnteredGamepadTextInput, 0);
	api_define_func("ISteamUtils", "IsSteamRunningInVR", js_ISteamUtils_IsSteamRunningInVR, 0);
	api_define_func("ISteamUtils", "IsSteamInBigPictureMode", js_ISteamUtils_IsSteamInBigPictureMode, 0);
	api_define_func("ISteamUtils", "IsVRHeadsetStreamingEnabled", js_ISteamUtils_IsVRHeadsetStreamingEnabled, 0);
	api_define_func("ISteamUtils", "IsSteamChinaLauncher", js_ISteamUtils_IsSteamChinaLauncher, 0);
	api_define_func("ISteamUtils", "InitFilterText", js_ISteamUtils_InitFilterText, 0);
	api_define_func("ISteamUtils", "IsSteamRunningOnSteamDeck", js_ISteamUtils_IsSteamRunningOnSteamDeck, 0);
	api_define_func("ISteamUtils", "ShowFloatingGamepadTextInput", js_ISteamUtils_ShowFloatingGamepadTextInput, 0);
	api_define_func("ISteamUtils", "DismissFloatingGamepadTextInput", js_ISteamUtils_DismissFloatingGamepadTextInput, 0);
	api_define_func("ISteamUtils", "GetCurrentBatteryPower", js_ISteamUtils_GetCurrentBatteryPower, 0);
	api_define_func("ISteamUtils", "SetOverlayNotificationPosition", js_ISteamUtils_SetOverlayNotificationPosition, 0);
	api_define_func("ISteamUtils", "SetOverlayNotificationInset", js_ISteamUtils_SetOverlayNotificationInset, 0);
	api_define_func("ISteamUtils", "StartVRDashboard", js_ISteamUtils_StartVRDashboard, 0);
	api_define_func("ISteamUtils", "SetVRHeadsetStreamingEnabled", js_ISteamUtils_SetVRHeadsetStreamingEnabled, 0);
	api_define_func("ISteamUtils", "SetGameLauncherMode", js_ISteamUtils_SetGameLauncherMode, 0);
	api_define_func("ISteamUtils", "CheckFileSignature", js_ISteamUtils_CheckFileSignature, 0);
	api_define_func("ISteamUtils", "FilterText", js_ISteamUtils_FilterText, 0);

	// ISteamUserStats
	api_define_func("ISteamUserStats", "RequestCurrentStats", js_ISteamUserStats_RequestCurrentStats, 0);
	api_define_func("ISteamUserStats", "GetStatInt32", js_ISteamUserStats_GetStatInt32, 0);
	api_define_func("ISteamUserStats", "GetStatFloat", js_ISteamUserStats_GetStatFloat, 0);
	api_define_func("ISteamUserStats", "SetStatInt32", js_ISteamUserStats_SetStatInt32, 0);
	api_define_func("ISteamUserStats", "SetStatFloat", js_ISteamUserStats_SetStatFloat, 0);
	api_define_func("ISteamUserStats", "UpdateAvgRateStat", js_ISteamUserStats_UpdateAvgRateStat, 0);
	api_define_func("ISteamUserStats", "GetAchievement", js_ISteamUserStats_GetAchievement, 0);
	api_define_func("ISteamUserStats", "SetAchievement", js_ISteamUserStats_SetAchievement, 0);
	api_define_func("ISteamUserStats", "ClearAchievement", js_ISteamUserStats_ClearAchievement, 0);
	api_define_func("ISteamUserStats", "GetAchievementAndUnlockTime", js_ISteamUserStats_GetAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "StoreStats", js_ISteamUserStats_StoreStats, 0);
	api_define_func("ISteamUserStats", "IndicateAchievementProgress", js_ISteamUserStats_IndicateAchievementProgress, 0);
	api_define_func("ISteamUserStats", "GetUserStatInt32", js_ISteamUserStats_GetUserStatInt32, 0);
	api_define_func("ISteamUserStats", "GetUserStatFloat", js_ISteamUserStats_GetUserStatFloat, 0);
	api_define_func("ISteamUserStats", "GetUserAchievement", js_ISteamUserStats_GetUserAchievement, 0);
	api_define_func("ISteamUserStats", "GetUserAchievementAndUnlockTime", js_ISteamUserStats_GetUserAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "ResetAllStats", js_ISteamUserStats_ResetAllStats, 0);
	api_define_func("ISteamUserStats", "GetDownloadedLeaderboardEntry", js_ISteamUserStats_GetDownloadedLeaderboardEntry, 0);
	api_define_func("ISteamUserStats", "GetAchievementAchievedPercent", js_ISteamUserStats_GetAchievementAchievedPercent, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatInt64", js_ISteamUserStats_GetGlobalStatInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatDouble", js_ISteamUserStats_GetGlobalStatDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimitsInt32", js_ISteamUserStats_GetAchievementProgressLimitsInt32, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimitsFloat", js_ISteamUserStats_GetAchievementProgressLimitsFloat, 0);
	api_define_func("ISteamUserStats", "GetAchievementIcon", js_ISteamUserStats_GetAchievementIcon, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardEntryCount", js_ISteamUserStats_GetLeaderboardEntryCount, 0);
	api_define_func("ISteamUserStats", "GetMostAchievedAchievementInfo", js_ISteamUserStats_GetMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetNextMostAchievedAchievementInfo", js_ISteamUserStats_GetNextMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistoryInt64", js_ISteamUserStats_GetGlobalStatHistoryInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistoryDouble", js_ISteamUserStats_GetGlobalStatHistoryDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementDisplayAttribute", js_ISteamUserStats_GetAchievementDisplayAttribute, 0);
	api_define_func("ISteamUserStats", "GetAchievementName", js_ISteamUserStats_GetAchievementName, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardName", js_ISteamUserStats_GetLeaderboardName, 0);
	api_define_func("ISteamUserStats", "GetNumAchievements", js_ISteamUserStats_GetNumAchievements, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardSortMethod", js_ISteamUserStats_GetLeaderboardSortMethod, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardDisplayType", js_ISteamUserStats_GetLeaderboardDisplayType, 0);
	api_define_func("ISteamUserStats", "RequestUserStats", js_ISteamUserStats_RequestUserStats, 0);
	api_define_func("ISteamUserStats", "FindOrCreateLeaderboard", js_ISteamUserStats_FindOrCreateLeaderboard, 0);
	api_define_func("ISteamUserStats", "FindLeaderboard", js_ISteamUserStats_FindLeaderboard, 0);
	api_define_func("ISteamUserStats", "DownloadLeaderboardEntries", js_ISteamUserStats_DownloadLeaderboardEntries, 0);
	api_define_func("ISteamUserStats", "DownloadLeaderboardEntriesForUsers", js_ISteamUserStats_DownloadLeaderboardEntriesForUsers, 0);
	api_define_func("ISteamUserStats", "UploadLeaderboardScore", js_ISteamUserStats_UploadLeaderboardScore, 0);
	api_define_func("ISteamUserStats", "AttachLeaderboardUGC", js_ISteamUserStats_AttachLeaderboardUGC, 0);
	api_define_func("ISteamUserStats", "GetNumberOfCurrentPlayers", js_ISteamUserStats_GetNumberOfCurrentPlayers, 0);
	api_define_func("ISteamUserStats", "RequestGlobalAchievementPercentages", js_ISteamUserStats_RequestGlobalAchievementPercentages, 0);
	api_define_func("ISteamUserStats", "RequestGlobalStats", js_ISteamUserStats_RequestGlobalStats, 0);

	// ISteamApps
	api_define_func("ISteamApps", "BIsSubscribed", js_ISteamApps_BIsSubscribed, 0);
	api_define_func("ISteamApps", "BIsLowViolence", js_ISteamApps_BIsLowViolence, 0);
	api_define_func("ISteamApps", "BIsCybercafe", js_ISteamApps_BIsCybercafe, 0);
	api_define_func("ISteamApps", "BIsVACBanned", js_ISteamApps_BIsVACBanned, 0);
	api_define_func("ISteamApps", "BIsSubscribedApp", js_ISteamApps_BIsSubscribedApp, 0);
	api_define_func("ISteamApps", "BIsDlcInstalled", js_ISteamApps_BIsDlcInstalled, 0);
	api_define_func("ISteamApps", "BIsSubscribedFromFreeWeekend", js_ISteamApps_BIsSubscribedFromFreeWeekend, 0);
	api_define_func("ISteamApps", "BGetDLCDataByIndex", js_ISteamApps_BGetDLCDataByIndex, 0);
	api_define_func("ISteamApps", "GetCurrentBetaName", js_ISteamApps_GetCurrentBetaName, 0);
	api_define_func("ISteamApps", "MarkContentCorrupt", js_ISteamApps_MarkContentCorrupt, 0);
	api_define_func("ISteamApps", "BIsAppInstalled", js_ISteamApps_BIsAppInstalled, 0);
	api_define_func("ISteamApps", "GetDlcDownloadProgress", js_ISteamApps_GetDlcDownloadProgress, 0);
	api_define_func("ISteamApps", "BIsSubscribedFromFamilySharing", js_ISteamApps_BIsSubscribedFromFamilySharing, 0);
	api_define_func("ISteamApps", "BIsTimedTrial", js_ISteamApps_BIsTimedTrial, 0);
	api_define_func("ISteamApps", "SetDlcContext", js_ISteamApps_SetDlcContext, 0);
	api_define_func("ISteamApps", "GetCurrentGameLanguage", js_ISteamApps_GetCurrentGameLanguage, 0);
	api_define_func("ISteamApps", "GetAvailableGameLanguages", js_ISteamApps_GetAvailableGameLanguages, 0);
	api_define_func("ISteamApps", "GetLaunchQueryParam", js_ISteamApps_GetLaunchQueryParam, 0);
	api_define_func("ISteamApps", "GetEarliestPurchaseUnixTime", js_ISteamApps_GetEarliestPurchaseUnixTime, 0);
	api_define_func("ISteamApps", "GetInstalledDepots", js_ISteamApps_GetInstalledDepots, 0);
	api_define_func("ISteamApps", "GetAppInstallDir", js_ISteamApps_GetAppInstallDir, 0);
	api_define_func("ISteamApps", "GetDLCCount", js_ISteamApps_GetDLCCount, 0);
	api_define_func("ISteamApps", "GetAppBuildId", js_ISteamApps_GetAppBuildId, 0);
	api_define_func("ISteamApps", "GetLaunchCommandLine", js_ISteamApps_GetLaunchCommandLine, 0);
	api_define_func("ISteamApps", "InstallDLC", js_ISteamApps_InstallDLC, 0);
	api_define_func("ISteamApps", "UninstallDLC", js_ISteamApps_UninstallDLC, 0);
	api_define_func("ISteamApps", "RequestAppProofOfPurchaseKey", js_ISteamApps_RequestAppProofOfPurchaseKey, 0);
	api_define_func("ISteamApps", "RequestAllProofOfPurchaseKeys", js_ISteamApps_RequestAllProofOfPurchaseKeys, 0);
	api_define_func("ISteamApps", "GetAppOwner", js_ISteamApps_GetAppOwner, 0);
	api_define_func("ISteamApps", "GetFileDetails", js_ISteamApps_GetFileDetails, 0);

	// ISteamInput
	api_define_func("ISteamInput", "Init", js_ISteamInput_Init, 0);
	api_define_func("ISteamInput", "Shutdown", js_ISteamInput_Shutdown, 0);
	api_define_func("ISteamInput", "SetInputActionManifestFilePath", js_ISteamInput_SetInputActionManifestFilePath, 0);
	api_define_func("ISteamInput", "BWaitForData", js_ISteamInput_BWaitForData, 0);
	api_define_func("ISteamInput", "BNewDataAvailable", js_ISteamInput_BNewDataAvailable, 0);
	api_define_func("ISteamInput", "ShowBindingPanel", js_ISteamInput_ShowBindingPanel, 0);
	api_define_func("ISteamInput", "GetDeviceBindingRevision", js_ISteamInput_GetDeviceBindingRevision, 0);
	api_define_func("ISteamInput", "RunFrame", js_ISteamInput_RunFrame, 0);
	api_define_func("ISteamInput", "EnableDeviceCallbacks", js_ISteamInput_EnableDeviceCallbacks, 0);
	api_define_func("ISteamInput", "ActivateActionSet", js_ISteamInput_ActivateActionSet, 0);
	api_define_func("ISteamInput", "ActivateActionSetLayer", js_ISteamInput_ActivateActionSetLayer, 0);
	api_define_func("ISteamInput", "DeactivateActionSetLayer", js_ISteamInput_DeactivateActionSetLayer, 0);
	api_define_func("ISteamInput", "DeactivateAllActionSetLayers", js_ISteamInput_DeactivateAllActionSetLayers, 0);
	api_define_func("ISteamInput", "StopAnalogActionMomentum", js_ISteamInput_StopAnalogActionMomentum, 0);
	api_define_func("ISteamInput", "TriggerVibration", js_ISteamInput_TriggerVibration, 0);
	api_define_func("ISteamInput", "TriggerVibrationExtended", js_ISteamInput_TriggerVibrationExtended, 0);
	api_define_func("ISteamInput", "TriggerSimpleHapticEvent", js_ISteamInput_TriggerSimpleHapticEvent, 0);
	api_define_func("ISteamInput", "SetLEDColor", js_ISteamInput_SetLEDColor, 0);
	api_define_func("ISteamInput", "TriggerHapticPulse", js_ISteamInput_Legacy_TriggerHapticPulse, 0);
	api_define_func("ISteamInput", "TriggerRepeatedHapticPulse", js_ISteamInput_Legacy_TriggerRepeatedHapticPulse, 0);
	api_define_func("ISteamInput", "GetConnectedControllers", js_ISteamInput_GetConnectedControllers, 0);
	api_define_func("ISteamInput", "GetActiveActionSetLayers", js_ISteamInput_GetActiveActionSetLayers, 0);
	api_define_func("ISteamInput", "GetDigitalActionOrigins", js_ISteamInput_GetDigitalActionOrigins, 0);
	api_define_func("ISteamInput", "GetAnalogActionOrigins", js_ISteamInput_GetAnalogActionOrigins, 0);
	api_define_func("ISteamInput", "GetGamepadIndexForController", js_ISteamInput_GetGamepadIndexForController, 0);
	api_define_func("ISteamInput", "GetActionSetHandle", js_ISteamInput_GetActionSetHandle, 0);
	api_define_func("ISteamInput", "GetCurrentActionSet", js_ISteamInput_GetCurrentActionSet, 0);
	api_define_func("ISteamInput", "GetDigitalActionHandle", js_ISteamInput_GetDigitalActionHandle, 0);
	api_define_func("ISteamInput", "GetAnalogActionHandle", js_ISteamInput_GetAnalogActionHandle, 0);
	api_define_func("ISteamInput", "GetControllerForGamepadIndex", js_ISteamInput_GetControllerForGamepadIndex, 0);
	api_define_func("ISteamInput", "GetDigitalActionData", js_ISteamInput_GetDigitalActionData, 0);
	api_define_func("ISteamInput", "GetStringForDigitalActionName", js_ISteamInput_GetStringForDigitalActionName, 0);
	api_define_func("ISteamInput", "GetGlyphPNGForActionOrigin", js_ISteamInput_GetGlyphPNGForActionOrigin, 0);
	api_define_func("ISteamInput", "GetGlyphSVGForActionOrigin", js_ISteamInput_GetGlyphSVGForActionOrigin, 0);
	api_define_func("ISteamInput", "Legacy", js_ISteamInput_GetGlyphForActionOrigin_Legacy, 0);
	api_define_func("ISteamInput", "GetStringForActionOrigin", js_ISteamInput_GetStringForActionOrigin, 0);
	api_define_func("ISteamInput", "GetStringForAnalogActionName", js_ISteamInput_GetStringForAnalogActionName, 0);
	api_define_func("ISteamInput", "GetStringForXboxOrigin", js_ISteamInput_GetStringForXboxOrigin, 0);
	api_define_func("ISteamInput", "GetGlyphForXboxOrigin", js_ISteamInput_GetGlyphForXboxOrigin, 0);
	api_define_func("ISteamInput", "GetAnalogActionData", js_ISteamInput_GetAnalogActionData, 0);
	api_define_func("ISteamInput", "GetMotionData", js_ISteamInput_GetMotionData, 0);
	api_define_func("ISteamInput", "GetInputTypeForHandle", js_ISteamInput_GetInputTypeForHandle, 0);
	api_define_func("ISteamInput", "GetActionOriginFromXboxOrigin", js_ISteamInput_GetActionOriginFromXboxOrigin, 0);
	api_define_func("ISteamInput", "TranslateActionOrigin", js_ISteamInput_TranslateActionOrigin, 0);
	api_define_func("ISteamInput", "GetRemotePlaySessionID", js_ISteamInput_GetRemotePlaySessionID, 0);
	api_define_func("ISteamInput", "GetSessionInputConfigurationSettings", js_ISteamInput_GetSessionInputConfigurationSettings, 0);

	// ISteamUGC
	api_define_func("ISteamUGC", "CreateQueryUserUGCRequest", js_ISteamUGC_CreateQueryUserUGCRequest, 0);
	api_define_func("ISteamUGC", "CreateQueryAllUGCRequestPage", js_ISteamUGC_CreateQueryAllUGCRequestPage, 0);
	api_define_func("ISteamUGC", "CreateQueryAllUGCRequestCursor", js_ISteamUGC_CreateQueryAllUGCRequestCursor, 0);
	api_define_func("ISteamUGC", "CreateQueryUGCDetailsRequest", js_ISteamUGC_CreateQueryUGCDetailsRequest, 0);
	api_define_func("ISteamUGC", "SendQueryUGCRequest", js_ISteamUGC_SendQueryUGCRequest, 0);
	api_define_func("ISteamUGC", "CreateItem", js_ISteamUGC_CreateItem, 0);
	api_define_func("ISteamUGC", "StartItemUpdate", js_ISteamUGC_StartItemUpdate, 0);
	api_define_func("ISteamUGC", "SubmitItemUpdate", js_ISteamUGC_SubmitItemUpdate, 0);
	api_define_func("ISteamUGC", "SetUserItemVote", js_ISteamUGC_SetUserItemVote, 0);
	api_define_func("ISteamUGC", "GetUserItemVote", js_ISteamUGC_GetUserItemVote, 0);
	api_define_func("ISteamUGC", "AddItemToFavorites", js_ISteamUGC_AddItemToFavorites, 0);
	api_define_func("ISteamUGC", "RemoveItemFromFavorites", js_ISteamUGC_RemoveItemFromFavorites, 0);
	api_define_func("ISteamUGC", "SubscribeItem", js_ISteamUGC_SubscribeItem, 0);
	api_define_func("ISteamUGC", "UnsubscribeItem", js_ISteamUGC_UnsubscribeItem, 0);
	api_define_func("ISteamUGC", "StartPlaytimeTracking", js_ISteamUGC_StartPlaytimeTracking, 0);
	api_define_func("ISteamUGC", "StopPlaytimeTracking", js_ISteamUGC_StopPlaytimeTracking, 0);
	api_define_func("ISteamUGC", "StopPlaytimeTrackingForAllItems", js_ISteamUGC_StopPlaytimeTrackingForAllItems, 0);
	api_define_func("ISteamUGC", "AddDependency", js_ISteamUGC_AddDependency, 0);
	api_define_func("ISteamUGC", "RemoveDependency", js_ISteamUGC_RemoveDependency, 0);
	api_define_func("ISteamUGC", "AddAppDependency", js_ISteamUGC_AddAppDependency, 0);
	api_define_func("ISteamUGC", "RemoveAppDependency", js_ISteamUGC_RemoveAppDependency, 0);
	api_define_func("ISteamUGC", "GetAppDependencies", js_ISteamUGC_GetAppDependencies, 0);
	api_define_func("ISteamUGC", "DeleteItem", js_ISteamUGC_DeleteItem, 0);
	api_define_func("ISteamUGC", "GetWorkshopEULAStatus", js_ISteamUGC_GetWorkshopEULAStatus, 0);
	api_define_func("ISteamUGC", "GetQueryUGCResult", js_ISteamUGC_GetQueryUGCResult, 0);
	api_define_func("ISteamUGC", "GetQueryUGCTag", js_ISteamUGC_GetQueryUGCTag, 0);
	api_define_func("ISteamUGC", "GetQueryUGCTagDisplayName", js_ISteamUGC_GetQueryUGCTagDisplayName, 0);
	api_define_func("ISteamUGC", "GetQueryUGCPreviewURL", js_ISteamUGC_GetQueryUGCPreviewURL, 0);
	api_define_func("ISteamUGC", "GetQueryUGCMetadata", js_ISteamUGC_GetQueryUGCMetadata, 0);
	api_define_func("ISteamUGC", "GetQueryUGCChildren", js_ISteamUGC_GetQueryUGCChildren, 0);
	api_define_func("ISteamUGC", "GetQueryUGCStatistic", js_ISteamUGC_GetQueryUGCStatistic, 0);
	api_define_func("ISteamUGC", "GetQueryUGCAdditionalPreview", js_ISteamUGC_GetQueryUGCAdditionalPreview, 0);
	api_define_func("ISteamUGC", "GetQueryUGCKeyValueTag", js_ISteamUGC_GetQueryUGCKeyValueTag, 0);
	api_define_func("ISteamUGC", "GetQueryFirstUGCKeyValueTag", js_ISteamUGC_GetQueryFirstUGCKeyValueTag, 0);
	api_define_func("ISteamUGC", "ReleaseQueryUGCRequest", js_ISteamUGC_ReleaseQueryUGCRequest, 0);
	api_define_func("ISteamUGC", "AddRequiredTag", js_ISteamUGC_AddRequiredTag, 0);
	api_define_func("ISteamUGC", "AddRequiredTagGroup", js_ISteamUGC_AddRequiredTagGroup, 0);
	api_define_func("ISteamUGC", "AddExcludedTag", js_ISteamUGC_AddExcludedTag, 0);
	api_define_func("ISteamUGC", "SetReturnOnlyIDs", js_ISteamUGC_SetReturnOnlyIDs, 0);
	api_define_func("ISteamUGC", "SetReturnKeyValueTags", js_ISteamUGC_SetReturnKeyValueTags, 0);
	api_define_func("ISteamUGC", "SetReturnLongDescription", js_ISteamUGC_SetReturnLongDescription, 0);
	api_define_func("ISteamUGC", "SetReturnMetadata", js_ISteamUGC_SetReturnMetadata, 0);
	api_define_func("ISteamUGC", "SetReturnChildren", js_ISteamUGC_SetReturnChildren, 0);
	api_define_func("ISteamUGC", "SetReturnAdditionalPreviews", js_ISteamUGC_SetReturnAdditionalPreviews, 0);
	api_define_func("ISteamUGC", "SetReturnTotalOnly", js_ISteamUGC_SetReturnTotalOnly, 0);
	api_define_func("ISteamUGC", "SetReturnPlaytimeStats", js_ISteamUGC_SetReturnPlaytimeStats, 0);
	api_define_func("ISteamUGC", "SetLanguage", js_ISteamUGC_SetLanguage, 0);
	api_define_func("ISteamUGC", "SetAllowCachedResponse", js_ISteamUGC_SetAllowCachedResponse, 0);
	api_define_func("ISteamUGC", "SetCloudFileNameFilter", js_ISteamUGC_SetCloudFileNameFilter, 0);
	api_define_func("ISteamUGC", "SetMatchAnyTag", js_ISteamUGC_SetMatchAnyTag, 0);
	api_define_func("ISteamUGC", "SetSearchText", js_ISteamUGC_SetSearchText, 0);
	api_define_func("ISteamUGC", "SetRankedByTrendDays", js_ISteamUGC_SetRankedByTrendDays, 0);
	api_define_func("ISteamUGC", "SetTimeCreatedDateRange", js_ISteamUGC_SetTimeCreatedDateRange, 0);
	api_define_func("ISteamUGC", "SetTimeUpdatedDateRange", js_ISteamUGC_SetTimeUpdatedDateRange, 0);
	api_define_func("ISteamUGC", "AddRequiredKeyValueTag", js_ISteamUGC_AddRequiredKeyValueTag, 0);
	api_define_func("ISteamUGC", "SetItemTitle", js_ISteamUGC_SetItemTitle, 0);
	api_define_func("ISteamUGC", "SetItemDescription", js_ISteamUGC_SetItemDescription, 0);
	api_define_func("ISteamUGC", "SetItemUpdateLanguage", js_ISteamUGC_SetItemUpdateLanguage, 0);
	api_define_func("ISteamUGC", "SetItemMetadata", js_ISteamUGC_SetItemMetadata, 0);
	api_define_func("ISteamUGC", "SetItemVisibility", js_ISteamUGC_SetItemVisibility, 0);
	api_define_func("ISteamUGC", "SetItemTags", js_ISteamUGC_SetItemTags, 0);
	api_define_func("ISteamUGC", "SetItemContent", js_ISteamUGC_SetItemContent, 0);
	api_define_func("ISteamUGC", "SetItemPreview", js_ISteamUGC_SetItemPreview, 0);
	api_define_func("ISteamUGC", "SetAllowLegacyUpload", js_ISteamUGC_SetAllowLegacyUpload, 0);
	api_define_func("ISteamUGC", "RemoveAllItemKeyValueTags", js_ISteamUGC_RemoveAllItemKeyValueTags, 0);
	api_define_func("ISteamUGC", "RemoveItemKeyValueTags", js_ISteamUGC_RemoveItemKeyValueTags, 0);
	api_define_func("ISteamUGC", "AddItemKeyValueTag", js_ISteamUGC_AddItemKeyValueTag, 0);
	api_define_func("ISteamUGC", "AddItemPreviewFile", js_ISteamUGC_AddItemPreviewFile, 0);
	api_define_func("ISteamUGC", "AddItemPreviewVideo", js_ISteamUGC_AddItemPreviewVideo, 0);
	api_define_func("ISteamUGC", "UpdateItemPreviewFile", js_ISteamUGC_UpdateItemPreviewFile, 0);
	api_define_func("ISteamUGC", "UpdateItemPreviewVideo", js_ISteamUGC_UpdateItemPreviewVideo, 0);
	api_define_func("ISteamUGC", "RemoveItemPreview", js_ISteamUGC_RemoveItemPreview, 0);
	api_define_func("ISteamUGC", "AddContentDescriptor", js_ISteamUGC_AddContentDescriptor, 0);
	api_define_func("ISteamUGC", "RemoveContentDescriptor", js_ISteamUGC_RemoveContentDescriptor, 0);
	api_define_func("ISteamUGC", "GetItemInstallInfo", js_ISteamUGC_GetItemInstallInfo, 0);
	api_define_func("ISteamUGC", "GetItemDownloadInfo", js_ISteamUGC_GetItemDownloadInfo, 0);
	api_define_func("ISteamUGC", "DownloadItem", js_ISteamUGC_DownloadItem, 0);
	api_define_func("ISteamUGC", "BInitWorkshopForGameServer", js_ISteamUGC_BInitWorkshopForGameServer, 0);
	api_define_func("ISteamUGC", "ShowWorkshopEULA", js_ISteamUGC_ShowWorkshopEULA, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumTags", js_ISteamUGC_GetQueryUGCNumTags, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumAdditionalPreviews", js_ISteamUGC_GetQueryUGCNumAdditionalPreviews, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumKeyValueTags", js_ISteamUGC_GetQueryUGCNumKeyValueTags, 0);
	api_define_func("ISteamUGC", "GetQueryUGCContentDescriptors", js_ISteamUGC_GetQueryUGCContentDescriptors, 0);
	api_define_func("ISteamUGC", "GetItemUpdateProgress", js_ISteamUGC_GetItemUpdateProgress, 0);
	api_define_func("ISteamUGC", "GetNumSubscribedItems", js_ISteamUGC_GetNumSubscribedItems, 0);
	api_define_func("ISteamUGC", "GetSubscribedItems", js_ISteamUGC_GetSubscribedItems, 0);
	api_define_func("ISteamUGC", "GetItemState", js_ISteamUGC_GetItemState, 0);
	api_define_func("ISteamUGC", "GetUserContentDescriptorPreferences", js_ISteamUGC_GetUserContentDescriptorPreferences, 0);
	api_define_func("ISteamUGC", "SuspendDownloads", js_ISteamUGC_SuspendDownloads, 0);
}

static bool
js_SteamAPI_Init(int num_args, bool is_ctor, intptr_t magic)
{
#ifdef _WIN32
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
#elif defined(__APPLE__)
	steam_api = dlopen("libsteam_api.dylib", RTLD_LAZY);
#else
	steam_api = dlopen("libsteam_api.so", RTLD_LAZY);
#endif
	if (steam_api)
	{
		FuncPtr_000 SteamAPI_Init;
		SteamAPI_Init = (FuncPtr_000)GETADDRESS(steam_api, "SteamInternal_SteamAPI_Init");
		if (SteamAPI_Init(NULL, NULL) == 0)
		{
			FuncPtr_002 SteamAPI_ManualDispatch_Init = (FuncPtr_002)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_Init");
			SteamAPI_ManualDispatch_Init();

			FuncPtr_003 SteamAPI_GetHSteamPipe = (FuncPtr_003)GETADDRESS(steam_api, "SteamAPI_GetHSteamPipe");
			hSteamPipe = SteamAPI_GetHSteamPipe();
			
			FuncPtr_001 ISteamUser_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUser_v023");
			ISteamUser = ISteamUser_Accessor();

			FuncPtr_001 ISteamFriends_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamFriends_v017");
			ISteamFriends = ISteamFriends_Accessor();

			FuncPtr_001 ISteamUtils_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUtils_v010");
			ISteamUtils = ISteamUtils_Accessor();

			FuncPtr_001 ISteamUserStats_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUserStats_v012");
			ISteamUserStats = ISteamUserStats_Accessor();

			FuncPtr_001 ISteamApps_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamApps_v008");
			ISteamApps = ISteamApps_Accessor();

			FuncPtr_001 ISteamInput_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamInput_v006");
			ISteamInput = ISteamInput_Accessor();

			FuncPtr_001 ISteamUGC_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUGC_v018");
			ISteamUGC = ISteamUGC_Accessor();
		}
		else
			jsal_error(JS_ERROR, "SteamAPI_Init() failed. Is Steam running or is steam_appid.txt missing from executable folder?");
	}
	else
		jsal_error(JS_ERROR, "Failed to link to 'steam_api64.dll'.");
	
	return false;
}

static bool
js_SteamAPI_RunCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	CallbackMsg_t callback;

	FuncPtr_004 SteamAPI_ManualDispatch_RunFrame;
	SteamAPI_ManualDispatch_RunFrame = (FuncPtr_004)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_RunFrame");
	SteamAPI_ManualDispatch_RunFrame(hSteamPipe);

	FuncPtr_005 SteamAPI_ManualDispatch_GetNextCallback;
	SteamAPI_ManualDispatch_GetNextCallback = (FuncPtr_005)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_GetNextCallback");

	int i = 0;
	jsal_push_new_array();

	while (SteamAPI_ManualDispatch_GetNextCallback(hSteamPipe, &callback))
	{
		switch (callback.m_iCallback)
		{
			case 703:
			{
				SteamAPICallCompleted_t * pCallCompleted = (SteamAPICallCompleted_t *)callback.m_pubParam;
				void * pTmpCallResult = malloc(pCallCompleted->m_cubParam);
				bool bFailed;
				FuncPtr_006 SteamAPI_ManualDispatch_GetAPICallResult;
				SteamAPI_ManualDispatch_GetAPICallResult = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_GetAPICallResult");
				if (SteamAPI_ManualDispatch_GetAPICallResult(hSteamPipe, pCallCompleted->m_hAsyncCall, pTmpCallResult, pCallCompleted->m_cubParam, pCallCompleted->m_iCallback, &bFailed))
				{
					switch (pCallCompleted->m_iCallback)
					{
						case 154:
						{
							EncryptedAppTicketResponse_t* callbackStruct = (EncryptedAppTicketResponse_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 165:
						{
							StoreAuthURLResponse_t* callbackStruct = (StoreAuthURLResponse_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							int k;
							size_t n = sizeof(callbackStruct->m_szURL)/sizeof(char);
							jsal_push_new_array();
							for (k = 0; k < n; k++)
							{
								jsal_push_int(callbackStruct->m_szURL[k]);
								jsal_put_prop_index(-2, k);
							}
							jsal_put_prop_string(-2, "m_szURL");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 166:
						{
							MarketEligibilityResponse_t* callbackStruct = (MarketEligibilityResponse_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_boolean(callbackStruct->m_bAllowed);
							jsal_put_prop_string(-2, "m_bAllowed");
							jsal_push_uint(callbackStruct->m_eNotAllowedReason);
							jsal_put_prop_string(-2, "m_eNotAllowedReason");
							jsal_push_uint(callbackStruct->m_rtAllowedAtTime);
							jsal_put_prop_string(-2, "m_rtAllowedAtTime");
							jsal_push_int(callbackStruct->m_cdaySteamGuardRequiredDays);
							jsal_put_prop_string(-2, "m_cdaySteamGuardRequiredDays");
							jsal_push_int(callbackStruct->m_cdayNewDeviceCooldown);
							jsal_put_prop_string(-2, "m_cdayNewDeviceCooldown");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 167:
						{
							DurationControl_t* callbackStruct = (DurationControl_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_uint(callbackStruct->m_appid);
							jsal_put_prop_string(-2, "m_appid");
							jsal_push_boolean(callbackStruct->m_bApplicable);
							jsal_put_prop_string(-2, "m_bApplicable");
							jsal_push_int(callbackStruct->m_csecsLast5h);
							jsal_put_prop_string(-2, "m_csecsLast5h");
							jsal_push_uint(callbackStruct->m_progress);
							jsal_put_prop_string(-2, "m_progress");
							jsal_push_uint(callbackStruct->m_notification);
							jsal_put_prop_string(-2, "m_notification");
							jsal_push_int(callbackStruct->m_csecsToday);
							jsal_put_prop_string(-2, "m_csecsToday");
							jsal_push_int(callbackStruct->m_csecsRemaining);
							jsal_put_prop_string(-2, "m_csecsRemaining");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 347:
						{
							SetPersonaNameResponse_t* callbackStruct = (SetPersonaNameResponse_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_boolean(callbackStruct->m_bSuccess);
							jsal_put_prop_string(-2, "m_bSuccess");
							jsal_push_boolean(callbackStruct->m_bLocalSuccess);
							jsal_put_prop_string(-2, "m_bLocalSuccess");
							jsal_push_uint(callbackStruct->m_result);
							jsal_put_prop_string(-2, "m_result");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 341:
						{
							DownloadClanActivityCountsResult_t* callbackStruct = (DownloadClanActivityCountsResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_boolean(callbackStruct->m_bSuccess);
							jsal_put_prop_string(-2, "m_bSuccess");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 335:
						{
							ClanOfficerListResponse_t* callbackStruct = (ClanOfficerListResponse_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_steamIDClan);
							jsal_put_prop_string(-2, "m_steamIDClan");
							jsal_push_int(callbackStruct->m_cOfficers);
							jsal_put_prop_string(-2, "m_cOfficers");
							jsal_push_uint(callbackStruct->m_bSuccess);
							jsal_put_prop_string(-2, "m_bSuccess");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 342:
						{
							JoinClanChatRoomCompletionResult_t* callbackStruct = (JoinClanChatRoomCompletionResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_steamIDClanChat);
							jsal_put_prop_string(-2, "m_steamIDClanChat");
							jsal_push_uint(callbackStruct->m_eChatRoomEnterResponse);
							jsal_put_prop_string(-2, "m_eChatRoomEnterResponse");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 344:
						{
							FriendsGetFollowerCount_t* callbackStruct = (FriendsGetFollowerCount_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_steamID);
							jsal_put_prop_string(-2, "m_steamID");
							jsal_push_int(callbackStruct->m_nCount);
							jsal_put_prop_string(-2, "m_nCount");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 345:
						{
							FriendsIsFollowing_t* callbackStruct = (FriendsIsFollowing_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_steamID);
							jsal_put_prop_string(-2, "m_steamID");
							jsal_push_boolean(callbackStruct->m_bIsFollowing);
							jsal_put_prop_string(-2, "m_bIsFollowing");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 346:
						{
							FriendsEnumerateFollowingList_t* callbackStruct = (FriendsEnumerateFollowingList_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							int k;
							size_t n = sizeof(callbackStruct->m_rgSteamID)/sizeof(uint64_t);
							jsal_push_new_array();
							for (k = 0; k < n; k++)
							{
								push_uint64_t_to_str(callbackStruct->m_rgSteamID[k]);
								jsal_put_prop_index(-2, k);
							}
							jsal_put_prop_string(-2, "m_rgSteamID");
							jsal_push_int(callbackStruct->m_nResultsReturned);
							jsal_put_prop_string(-2, "m_nResultsReturned");
							jsal_push_int(callbackStruct->m_nTotalResultCount);
							jsal_put_prop_string(-2, "m_nTotalResultCount");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 351:
						{
							EquippedProfileItems_t* callbackStruct = (EquippedProfileItems_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_steamID);
							jsal_put_prop_string(-2, "m_steamID");
							jsal_push_boolean(callbackStruct->m_bHasAnimatedAvatar);
							jsal_put_prop_string(-2, "m_bHasAnimatedAvatar");
							jsal_push_boolean(callbackStruct->m_bHasAvatarFrame);
							jsal_put_prop_string(-2, "m_bHasAvatarFrame");
							jsal_push_boolean(callbackStruct->m_bHasProfileModifier);
							jsal_put_prop_string(-2, "m_bHasProfileModifier");
							jsal_push_boolean(callbackStruct->m_bHasProfileBackground);
							jsal_put_prop_string(-2, "m_bHasProfileBackground");
							jsal_push_boolean(callbackStruct->m_bHasMiniProfileBackground);
							jsal_put_prop_string(-2, "m_bHasMiniProfileBackground");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 705:
						{
							CheckFileSignature_t* callbackStruct = (CheckFileSignature_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eCheckFileSignature);
							jsal_put_prop_string(-2, "m_eCheckFileSignature");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1101:
						{
							UserStatsReceived_t* callbackStruct = (UserStatsReceived_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nGameID);
							jsal_put_prop_string(-2, "m_nGameID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_steamIDUser);
							jsal_put_prop_string(-2, "m_steamIDUser");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1104:
						{
							LeaderboardFindResult_t* callbackStruct = (LeaderboardFindResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_hSteamLeaderboard);
							jsal_put_prop_string(-2, "m_hSteamLeaderboard");
							jsal_push_uint(callbackStruct->m_bLeaderboardFound);
							jsal_put_prop_string(-2, "m_bLeaderboardFound");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1105:
						{
							LeaderboardScoresDownloaded_t* callbackStruct = (LeaderboardScoresDownloaded_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_hSteamLeaderboard);
							jsal_put_prop_string(-2, "m_hSteamLeaderboard");
							push_uint64_t_to_str(callbackStruct->m_hSteamLeaderboardEntries);
							jsal_put_prop_string(-2, "m_hSteamLeaderboardEntries");
							jsal_push_int(callbackStruct->m_cEntryCount);
							jsal_put_prop_string(-2, "m_cEntryCount");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1106:
						{
							LeaderboardScoreUploaded_t* callbackStruct = (LeaderboardScoreUploaded_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_bSuccess);
							jsal_put_prop_string(-2, "m_bSuccess");
							push_uint64_t_to_str(callbackStruct->m_hSteamLeaderboard);
							jsal_put_prop_string(-2, "m_hSteamLeaderboard");
							jsal_push_int(callbackStruct->m_nScore);
							jsal_put_prop_string(-2, "m_nScore");
							jsal_push_uint(callbackStruct->m_bScoreChanged);
							jsal_put_prop_string(-2, "m_bScoreChanged");
							jsal_push_int(callbackStruct->m_nGlobalRankNew);
							jsal_put_prop_string(-2, "m_nGlobalRankNew");
							jsal_push_int(callbackStruct->m_nGlobalRankPrevious);
							jsal_put_prop_string(-2, "m_nGlobalRankPrevious");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1111:
						{
							LeaderboardUGCSet_t* callbackStruct = (LeaderboardUGCSet_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_hSteamLeaderboard);
							jsal_put_prop_string(-2, "m_hSteamLeaderboard");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1107:
						{
							NumberOfCurrentPlayers_t* callbackStruct = (NumberOfCurrentPlayers_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_bSuccess);
							jsal_put_prop_string(-2, "m_bSuccess");
							jsal_push_int(callbackStruct->m_cPlayers);
							jsal_put_prop_string(-2, "m_cPlayers");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1110:
						{
							GlobalAchievementPercentagesReady_t* callbackStruct = (GlobalAchievementPercentagesReady_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nGameID);
							jsal_put_prop_string(-2, "m_nGameID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1112:
						{
							GlobalStatsReceived_t* callbackStruct = (GlobalStatsReceived_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nGameID);
							jsal_put_prop_string(-2, "m_nGameID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1023:
						{
							FileDetailsResult_t* callbackStruct = (FileDetailsResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_ulFileSize);
							jsal_put_prop_string(-2, "m_ulFileSize");
							int k;
							size_t n = sizeof(callbackStruct->m_FileSHA)/sizeof(uint8_t);
							jsal_push_new_array();
							for (k = 0; k < n; k++)
							{
								jsal_push_uint(callbackStruct->m_FileSHA[k]);
								jsal_put_prop_index(-2, k);
							}
							jsal_put_prop_string(-2, "m_FileSHA");
							jsal_push_uint(callbackStruct->m_unFlags);
							jsal_put_prop_string(-2, "m_unFlags");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3401:
						{
							SteamUGCQueryCompleted_t* callbackStruct = (SteamUGCQueryCompleted_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_handle);
							jsal_put_prop_string(-2, "m_handle");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_uint(callbackStruct->m_unNumResultsReturned);
							jsal_put_prop_string(-2, "m_unNumResultsReturned");
							jsal_push_uint(callbackStruct->m_unTotalMatchingResults);
							jsal_put_prop_string(-2, "m_unTotalMatchingResults");
							jsal_push_boolean(callbackStruct->m_bCachedData);
							jsal_put_prop_string(-2, "m_bCachedData");
							int k;
							size_t n = sizeof(callbackStruct->m_rgchNextCursor)/sizeof(char);
							jsal_push_new_array();
							for (k = 0; k < n; k++)
							{
								jsal_push_int(callbackStruct->m_rgchNextCursor[k]);
								jsal_put_prop_index(-2, k);
							}
							jsal_put_prop_string(-2, "m_rgchNextCursor");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3403:
						{
							CreateItemResult_t* callbackStruct = (CreateItemResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_boolean(callbackStruct->m_bUserNeedsToAcceptWorkshopLegalAgreement);
							jsal_put_prop_string(-2, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3404:
						{
							SubmitItemUpdateResult_t* callbackStruct = (SubmitItemUpdateResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_boolean(callbackStruct->m_bUserNeedsToAcceptWorkshopLegalAgreement);
							jsal_put_prop_string(-2, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3408:
						{
							SetUserItemVoteResult_t* callbackStruct = (SetUserItemVoteResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_boolean(callbackStruct->m_bVoteUp);
							jsal_put_prop_string(-2, "m_bVoteUp");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3409:
						{
							GetUserItemVoteResult_t* callbackStruct = (GetUserItemVoteResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_boolean(callbackStruct->m_bVotedUp);
							jsal_put_prop_string(-2, "m_bVotedUp");
							jsal_push_boolean(callbackStruct->m_bVotedDown);
							jsal_put_prop_string(-2, "m_bVotedDown");
							jsal_push_boolean(callbackStruct->m_bVoteSkipped);
							jsal_put_prop_string(-2, "m_bVoteSkipped");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3407:
						{
							UserFavoriteItemsListChanged_t* callbackStruct = (UserFavoriteItemsListChanged_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_boolean(callbackStruct->m_bWasAddRequest);
							jsal_put_prop_string(-2, "m_bWasAddRequest");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1313:
						{
							RemoteStorageSubscribePublishedFileResult_t* callbackStruct = (RemoteStorageSubscribePublishedFileResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 1315:
						{
							RemoteStorageUnsubscribePublishedFileResult_t* callbackStruct = (RemoteStorageUnsubscribePublishedFileResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3410:
						{
							StartPlaytimeTrackingResult_t* callbackStruct = (StartPlaytimeTrackingResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3411:
						{
							StopPlaytimeTrackingResult_t* callbackStruct = (StopPlaytimeTrackingResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3412:
						{
							AddUGCDependencyResult_t* callbackStruct = (AddUGCDependencyResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							push_uint64_t_to_str(callbackStruct->m_nChildPublishedFileId);
							jsal_put_prop_string(-2, "m_nChildPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3413:
						{
							RemoveUGCDependencyResult_t* callbackStruct = (RemoveUGCDependencyResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							push_uint64_t_to_str(callbackStruct->m_nChildPublishedFileId);
							jsal_put_prop_string(-2, "m_nChildPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3414:
						{
							AddAppDependencyResult_t* callbackStruct = (AddAppDependencyResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_uint(callbackStruct->m_nAppID);
							jsal_put_prop_string(-2, "m_nAppID");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3415:
						{
							RemoveAppDependencyResult_t* callbackStruct = (RemoveAppDependencyResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_push_uint(callbackStruct->m_nAppID);
							jsal_put_prop_string(-2, "m_nAppID");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3416:
						{
							GetAppDependenciesResult_t* callbackStruct = (GetAppDependenciesResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							int k;
							size_t n = sizeof(callbackStruct->m_rgAppIDs)/sizeof(uint32_t);
							jsal_push_new_array();
							for (k = 0; k < n; k++)
							{
								jsal_push_uint(callbackStruct->m_rgAppIDs[k]);
								jsal_put_prop_index(-2, k);
							}
							jsal_put_prop_string(-2, "m_rgAppIDs");
							jsal_push_uint(callbackStruct->m_nNumAppDependencies);
							jsal_put_prop_string(-2, "m_nNumAppDependencies");
							jsal_push_uint(callbackStruct->m_nTotalNumAppDependencies);
							jsal_put_prop_string(-2, "m_nTotalNumAppDependencies");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3417:
						{
							DeleteItemResult_t* callbackStruct = (DeleteItemResult_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							push_uint64_t_to_str(callbackStruct->m_nPublishedFileId);
							jsal_put_prop_string(-2, "m_nPublishedFileId");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
						case 3420:
						{
							WorkshopEULAStatus_t* callbackStruct = (WorkshopEULAStatus_t *)pTmpCallResult;
							jsal_push_new_object();
							uint64_t callID = pCallCompleted->m_hAsyncCall;
							push_uint64_t_to_str(callID);
							jsal_put_prop_string(-2, "callID");
							jsal_push_uint(callbackStruct->m_eResult);
							jsal_put_prop_string(-2, "m_eResult");
							jsal_push_uint(callbackStruct->m_nAppID);
							jsal_put_prop_string(-2, "m_nAppID");
							jsal_push_uint(callbackStruct->m_unVersion);
							jsal_put_prop_string(-2, "m_unVersion");
							jsal_push_uint(callbackStruct->m_rtAction);
							jsal_put_prop_string(-2, "m_rtAction");
							jsal_push_boolean(callbackStruct->m_bAccepted);
							jsal_put_prop_string(-2, "m_bAccepted");
							jsal_push_boolean(callbackStruct->m_bNeedsAction);
							jsal_put_prop_string(-2, "m_bNeedsAction");
							jsal_put_prop_index(-2, i);
							i++;
							break;
						}
					}
				}
				free( pTmpCallResult );
			}
			case 331:
			{
				GameOverlayActivated_t* callbackStruct = (GameOverlayActivated_t *)callback.m_pubParam;
				jsal_push_new_object();
				const char* name = "GameOverlayActivated";
				jsal_push_string(name);
				jsal_put_prop_string(-2, "name");
				jsal_push_uint(callbackStruct->m_bActive);
				jsal_put_prop_string(-2, "m_bActive");
				jsal_push_boolean(callbackStruct->m_bUserInitiated);
				jsal_put_prop_string(-2, "m_bUserInitiated");
				jsal_push_uint(callbackStruct->m_nAppID);
				jsal_put_prop_string(-2, "m_nAppID");
				jsal_push_uint(callbackStruct->m_dwOverlayPID);
				jsal_put_prop_string(-2, "m_dwOverlayPID");
				jsal_put_prop_index(-2, i);
				i++;
				break;
			}
		}

		FuncPtr_004 SteamAPI_ManualDispatch_FreeLastCallback;
		SteamAPI_ManualDispatch_FreeLastCallback = (FuncPtr_004)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_FreeLastCallback");
		SteamAPI_ManualDispatch_FreeLastCallback(hSteamPipe);
	}

	return true;
}

static bool
js_SteamAPI_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_002 SteamAPI_Shutdown;
	SteamAPI_Shutdown = (FuncPtr_002)GETADDRESS(steam_api, "SteamAPI_Shutdown");
	SteamAPI_Shutdown();

	return false;
}

static bool
js_ISteamUser_GetHSteamUser(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamUser_GetHSteamUser;

	ISteamUser_GetHSteamUser = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetHSteamUser");
	result = ISteamUser_GetHSteamUser(ISteamUser);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_GetGameBadgeLevel(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nSeries;
	bool bFoil;
	int32_t result;
	FuncPtr_019 ISteamUser_GetGameBadgeLevel;

	nSeries = jsal_require_int(0);
	bFoil = jsal_require_boolean(1);

	ISteamUser_GetGameBadgeLevel = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetGameBadgeLevel");
	result = ISteamUser_GetGameBadgeLevel(ISteamUser, nSeries, bFoil);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_GetPlayerSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamUser_GetPlayerSteamLevel;

	ISteamUser_GetPlayerSteamLevel = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetPlayerSteamLevel");
	result = ISteamUser_GetPlayerSteamLevel(ISteamUser);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_BLoggedOn(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BLoggedOn;

	ISteamUser_BLoggedOn = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BLoggedOn");
	result = ISteamUser_BLoggedOn(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_GetUserDataFolder(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchBuffer;
	int32_t cubBuffer;
	bool result;
	FuncPtr_011 ISteamUser_GetUserDataFolder;

	cubBuffer = jsal_require_int(0);

	if (!(pchBuffer = (char *)calloc(cubBuffer, sizeof(char))))
		return false;

	ISteamUser_GetUserDataFolder = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetUserDataFolder");
	result = ISteamUser_GetUserDataFolder(ISteamUser, pchBuffer, cubBuffer);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchBuffer);
	jsal_put_prop_string(-2, "pchBuffer");

	free(pchBuffer);

	return true;
}

static bool
js_ISteamUser_BIsBehindNAT(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BIsBehindNAT;

	ISteamUser_BIsBehindNAT = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsBehindNAT");
	result = ISteamUser_BIsBehindNAT(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneVerified(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BIsPhoneVerified;

	ISteamUser_BIsPhoneVerified = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneVerified");
	result = ISteamUser_BIsPhoneVerified(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsTwoFactorEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BIsTwoFactorEnabled;

	ISteamUser_BIsTwoFactorEnabled = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsTwoFactorEnabled");
	result = ISteamUser_BIsTwoFactorEnabled(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneIdentifying(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BIsPhoneIdentifying;

	ISteamUser_BIsPhoneIdentifying = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneIdentifying");
	result = ISteamUser_BIsPhoneIdentifying(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneRequiringVerification(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUser_BIsPhoneRequiringVerification;

	ISteamUser_BIsPhoneRequiringVerification = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneRequiringVerification");
	result = ISteamUser_BIsPhoneRequiringVerification(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BSetDurationControlOnlineState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eNewState;
	bool result;
	FuncPtr_021 ISteamUser_BSetDurationControlOnlineState;

	eNewState = jsal_require_uint(0);

	ISteamUser_BSetDurationControlOnlineState = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BSetDurationControlOnlineState");
	result = ISteamUser_BSetDurationControlOnlineState(ISteamUser, eNewState);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_GetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUser_GetSteamID;

	ISteamUser_GetSteamID = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetSteamID");
	result = ISteamUser_GetSteamID(ISteamUser);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUser_RequestStoreAuthURL(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchRedirectURL;
	uint64_t result;
	FuncPtr_020 ISteamUser_RequestStoreAuthURL;

	pchRedirectURL = (char*)jsal_require_string(0);

	ISteamUser_RequestStoreAuthURL = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamUser_RequestStoreAuthURL");
	result = ISteamUser_RequestStoreAuthURL(ISteamUser, pchRedirectURL);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUser_GetMarketEligibility(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUser_GetMarketEligibility;

	ISteamUser_GetMarketEligibility = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetMarketEligibility");
	result = ISteamUser_GetMarketEligibility(ISteamUser);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUser_GetDurationControl(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUser_GetDurationControl;

	ISteamUser_GetDurationControl = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetDurationControl");
	result = ISteamUser_GetDurationControl(ISteamUser);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUser_TrackAppUsageEvent(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t gameID;
	int32_t eAppUsageEvent;
	const char * pchExtraInfo;
	FuncPtr_010 ISteamUser_TrackAppUsageEvent;

	gameID = require_str_to_uint64_t(0);
	eAppUsageEvent = jsal_require_int(1);
	pchExtraInfo = (char*)jsal_require_string(2);

	ISteamUser_TrackAppUsageEvent = (FuncPtr_010)GETADDRESS(steam_api, "SteamAPI_ISteamUser_TrackAppUsageEvent");
	ISteamUser_TrackAppUsageEvent(ISteamUser, gameID, eAppUsageEvent, pchExtraInfo);

	return false;
}

static bool
js_ISteamUser_StartVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamUser_StartVoiceRecording;

	ISteamUser_StartVoiceRecording = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUser_StartVoiceRecording");
	ISteamUser_StartVoiceRecording(ISteamUser);

	return false;
}

static bool
js_ISteamUser_StopVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamUser_StopVoiceRecording;

	ISteamUser_StopVoiceRecording = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUser_StopVoiceRecording");
	ISteamUser_StopVoiceRecording(ISteamUser);

	return false;
}

static bool
js_ISteamUser_EndAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	FuncPtr_015 ISteamUser_EndAuthSession;

	steamID = require_str_to_uint64_t(0);

	ISteamUser_EndAuthSession = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamUser_EndAuthSession");
	ISteamUser_EndAuthSession(ISteamUser, steamID);

	return false;
}

static bool
js_ISteamUser_CancelAuthTicket(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t hAuthTicket;
	FuncPtr_016 ISteamUser_CancelAuthTicket;

	hAuthTicket = jsal_require_uint(0);

	ISteamUser_CancelAuthTicket = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamUser_CancelAuthTicket");
	ISteamUser_CancelAuthTicket(ISteamUser, hAuthTicket);

	return false;
}

static bool
js_ISteamUser_AdvertiseGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDGameServer;
	uint32_t unIPServer;
	uint16_t usPortServer;
	FuncPtr_018 ISteamUser_AdvertiseGame;

	steamIDGameServer = require_str_to_uint64_t(0);
	unIPServer = jsal_require_uint(1);
	usPortServer = jsal_require_uint(2);

	ISteamUser_AdvertiseGame = (FuncPtr_018)GETADDRESS(steam_api, "SteamAPI_ISteamUser_AdvertiseGame");
	ISteamUser_AdvertiseGame(ISteamUser, steamIDGameServer, unIPServer, usPortServer);

	return false;
}

static bool
js_ISteamUser_GetVoiceOptimalSampleRate(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUser_GetVoiceOptimalSampleRate;

	ISteamUser_GetVoiceOptimalSampleRate = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate");
	result = ISteamUser_GetVoiceOptimalSampleRate(ISteamUser);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUser_GetAuthTicketForWebApi(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchIdentity;
	uint32_t result;
	FuncPtr_014 ISteamUser_GetAuthTicketForWebApi;

	pchIdentity = (char*)jsal_require_string(0);

	ISteamUser_GetAuthTicketForWebApi = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetAuthTicketForWebApi");
	result = ISteamUser_GetAuthTicketForWebApi(ISteamUser, pchIdentity);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUser_UserHasLicenseForApp(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t appID;
	uint32_t result;
	FuncPtr_017 ISteamUser_UserHasLicenseForApp;

	steamID = require_str_to_uint64_t(0);
	appID = jsal_require_uint(1);

	ISteamUser_UserHasLicenseForApp = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamUser_UserHasLicenseForApp");
	result = ISteamUser_UserHasLicenseForApp(ISteamUser, steamID, appID);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_022 ISteamFriends_GetPersonaName;

	ISteamFriends_GetPersonaName = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPersonaName");
	result = ISteamFriends_GetPersonaName(ISteamFriends);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * result;
	FuncPtr_026 ISteamFriends_GetFriendPersonaName;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendPersonaName = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaName");
	result = ISteamFriends_GetFriendPersonaName(ISteamFriends, steamIDFriend);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaNameHistory(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iPersonaName;
	const char * result;
	FuncPtr_028 ISteamFriends_GetFriendPersonaNameHistory;

	steamIDFriend = require_str_to_uint64_t(0);
	iPersonaName = jsal_require_int(1);

	ISteamFriends_GetFriendPersonaNameHistory = (FuncPtr_028)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaNameHistory");
	result = ISteamFriends_GetFriendPersonaNameHistory(ISteamFriends, steamIDFriend, iPersonaName);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetPlayerNickname(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDPlayer;
	const char * result;
	FuncPtr_026 ISteamFriends_GetPlayerNickname;

	steamIDPlayer = require_str_to_uint64_t(0);

	ISteamFriends_GetPlayerNickname = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPlayerNickname");
	result = ISteamFriends_GetPlayerNickname(ISteamFriends, steamIDPlayer);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupName(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	const char * result;
	FuncPtr_031 ISteamFriends_GetFriendsGroupName;

	friendsGroupID = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupName = (FuncPtr_031)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupName");
	result = ISteamFriends_GetFriendsGroupName(ISteamFriends, friendsGroupID);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetClanName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_026 ISteamFriends_GetClanName;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanName = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanName");
	result = ISteamFriends_GetClanName(ISteamFriends, steamIDClan);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetClanTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_026 ISteamFriends_GetClanTag;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanTag = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanTag");
	result = ISteamFriends_GetClanTag(ISteamFriends, steamIDClan);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchKey;
	const char * result;
	FuncPtr_048 ISteamFriends_GetFriendRichPresence;

	steamIDFriend = require_str_to_uint64_t(0);
	pchKey = (char*)jsal_require_string(1);

	ISteamFriends_GetFriendRichPresence = (FuncPtr_048)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresence");
	result = ISteamFriends_GetFriendRichPresence(ISteamFriends, steamIDFriend, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iKey;
	const char * result;
	FuncPtr_028 ISteamFriends_GetFriendRichPresenceKeyByIndex;

	steamIDFriend = require_str_to_uint64_t(0);
	iKey = jsal_require_int(1);

	ISteamFriends_GetFriendRichPresenceKeyByIndex = (FuncPtr_028)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex");
	result = ISteamFriends_GetFriendRichPresenceKeyByIndex(ISteamFriends, steamIDFriend, iKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetProfileItemPropertyString(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	const char * result;
	FuncPtr_055 ISteamFriends_GetProfileItemPropertyString;

	steamID = require_str_to_uint64_t(0);
	itemType = jsal_require_uint(1);
	prop = jsal_require_uint(2);

	ISteamFriends_GetProfileItemPropertyString = (FuncPtr_055)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyString");
	result = ISteamFriends_GetProfileItemPropertyString(ISteamFriends, steamID, itemType, prop);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_SetPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchPersonaName;
	uint64_t result;
	FuncPtr_020 ISteamFriends_SetPersonaName;

	pchPersonaName = (char*)jsal_require_string(0);

	ISteamFriends_SetPersonaName = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetPersonaName");
	result = ISteamFriends_SetPersonaName(ISteamFriends, pchPersonaName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFriend;
	int32_t iFriendFlags;
	uint64_t result;
	FuncPtr_024 ISteamFriends_GetFriendByIndex;

	iFriend = jsal_require_int(0);
	iFriendFlags = jsal_require_int(1);

	ISteamFriends_GetFriendByIndex = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendByIndex");
	result = ISteamFriends_GetFriendByIndex(ISteamFriends, iFriend, iFriendFlags);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetClanByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iClan;
	uint64_t result;
	FuncPtr_035 ISteamFriends_GetClanByIndex;

	iClan = jsal_require_int(0);

	ISteamFriends_GetClanByIndex = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanByIndex");
	result = ISteamFriends_GetClanByIndex(ISteamFriends, iClan);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_DownloadClanActivityCounts(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * psteamIDClans;
	uint64_t result;
	FuncPtr_037 ISteamFriends_DownloadClanActivityCounts;

	jsal_require_array(0);
	int cClansToRequest = jsal_get_length(0);
	if (!(psteamIDClans = (uint64_t *)malloc(cClansToRequest * sizeof(uint64_t))))
		return false;
	for (int i = 0; i < cClansToRequest; ++i){
		jsal_get_prop_index(0, i);
		psteamIDClans[i] = require_str_to_uint64_t(-1);
		jsal_pop(1);
	}

	ISteamFriends_DownloadClanActivityCounts = (FuncPtr_037)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_DownloadClanActivityCounts");
	result = ISteamFriends_DownloadClanActivityCounts(ISteamFriends, psteamIDClans, cClansToRequest);

	push_uint64_t_to_str(result);

	free(psteamIDClans);

	return true;
}

static bool
js_ISteamFriends_GetFriendFromSourceByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDSource;
	int32_t iFriend;
	uint64_t result;
	FuncPtr_038 ISteamFriends_GetFriendFromSourceByIndex;

	steamIDSource = require_str_to_uint64_t(0);
	iFriend = jsal_require_int(1);

	ISteamFriends_GetFriendFromSourceByIndex = (FuncPtr_038)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendFromSourceByIndex");
	result = ISteamFriends_GetFriendFromSourceByIndex(ISteamFriends, steamIDSource, iFriend);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_RequestClanOfficerList(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_046 ISteamFriends_RequestClanOfficerList;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_RequestClanOfficerList = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestClanOfficerList");
	result = ISteamFriends_RequestClanOfficerList(ISteamFriends, steamIDClan);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOwner(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_046 ISteamFriends_GetClanOwner;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanOwner = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOwner");
	result = ISteamFriends_GetClanOwner(ISteamFriends, steamIDClan);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOfficerByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t iOfficer;
	uint64_t result;
	FuncPtr_038 ISteamFriends_GetClanOfficerByIndex;

	steamIDClan = require_str_to_uint64_t(0);
	iOfficer = jsal_require_int(1);

	ISteamFriends_GetClanOfficerByIndex = (FuncPtr_038)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerByIndex");
	result = ISteamFriends_GetClanOfficerByIndex(ISteamFriends, steamIDClan, iOfficer);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetCoplayFriend(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iCoplayFriend;
	uint64_t result;
	FuncPtr_035 ISteamFriends_GetCoplayFriend;

	iCoplayFriend = jsal_require_int(0);

	ISteamFriends_GetCoplayFriend = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriend");
	result = ISteamFriends_GetCoplayFriend(ISteamFriends, iCoplayFriend);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_JoinClanChatRoom(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_046 ISteamFriends_JoinClanChatRoom;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_JoinClanChatRoom = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_JoinClanChatRoom");
	result = ISteamFriends_JoinClanChatRoom(ISteamFriends, steamIDClan);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetChatMemberByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t iUser;
	uint64_t result;
	FuncPtr_038 ISteamFriends_GetChatMemberByIndex;

	steamIDClan = require_str_to_uint64_t(0);
	iUser = jsal_require_int(1);

	ISteamFriends_GetChatMemberByIndex = (FuncPtr_038)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetChatMemberByIndex");
	result = ISteamFriends_GetChatMemberByIndex(ISteamFriends, steamIDClan, iUser);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetFollowerCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint64_t result;
	FuncPtr_046 ISteamFriends_GetFollowerCount;

	steamID = require_str_to_uint64_t(0);

	ISteamFriends_GetFollowerCount = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFollowerCount");
	result = ISteamFriends_GetFollowerCount(ISteamFriends, steamID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_IsFollowing(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint64_t result;
	FuncPtr_046 ISteamFriends_IsFollowing;

	steamID = require_str_to_uint64_t(0);

	ISteamFriends_IsFollowing = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsFollowing");
	result = ISteamFriends_IsFollowing(ISteamFriends, steamID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_EnumerateFollowingList(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t unStartIndex;
	uint64_t result;
	FuncPtr_052 ISteamFriends_EnumerateFollowingList;

	unStartIndex = jsal_require_uint(0);

	ISteamFriends_EnumerateFollowingList = (FuncPtr_052)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_EnumerateFollowingList");
	result = ISteamFriends_EnumerateFollowingList(ISteamFriends, unStartIndex);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_RequestEquippedProfileItems(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint64_t result;
	FuncPtr_046 ISteamFriends_RequestEquippedProfileItems;

	steamID = require_str_to_uint64_t(0);

	ISteamFriends_RequestEquippedProfileItems = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestEquippedProfileItems");
	result = ISteamFriends_RequestEquippedProfileItems(ISteamFriends, steamID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamFriends_GetPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamFriends_GetPersonaState;

	ISteamFriends_GetPersonaState = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPersonaState");
	result = ISteamFriends_GetPersonaState(ISteamFriends);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRelationship(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_025 ISteamFriends_GetFriendRelationship;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendRelationship = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRelationship");
	result = ISteamFriends_GetFriendRelationship(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_025 ISteamFriends_GetFriendPersonaState;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendPersonaState = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaState");
	result = ISteamFriends_GetFriendPersonaState(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetUserRestrictions(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamFriends_GetUserRestrictions;

	ISteamFriends_GetUserRestrictions = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetUserRestrictions");
	result = ISteamFriends_GetUserRestrictions(ISteamFriends);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCoplayGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_025 ISteamFriends_GetFriendCoplayGame;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendCoplayGame = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayGame");
	result = ISteamFriends_GetFriendCoplayGame(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetProfileItemPropertyUint(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	uint32_t result;
	FuncPtr_056 ISteamFriends_GetProfileItemPropertyUint;

	steamID = require_str_to_uint64_t(0);
	itemType = jsal_require_uint(1);
	prop = jsal_require_uint(2);

	ISteamFriends_GetProfileItemPropertyUint = (FuncPtr_056)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyUint");
	result = ISteamFriends_GetProfileItemPropertyUint(ISteamFriends, steamID, itemType, prop);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFriendFlags;
	int32_t result;
	FuncPtr_023 ISteamFriends_GetFriendCount;

	iFriendFlags = jsal_require_int(0);

	ISteamFriends_GetFriendCount = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCount");
	result = ISteamFriends_GetFriendCount(ISteamFriends, iFriendFlags);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetFriendSteamLevel;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendSteamLevel = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendSteamLevel");
	result = ISteamFriends_GetFriendSteamLevel(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamFriends_GetFriendsGroupCount;

	ISteamFriends_GetFriendsGroupCount = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupCount");
	result = ISteamFriends_GetFriendsGroupCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupMembersCount(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	int32_t result;
	FuncPtr_032 ISteamFriends_GetFriendsGroupMembersCount;

	friendsGroupID = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupMembersCount = (FuncPtr_032)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersCount");
	result = ISteamFriends_GetFriendsGroupMembersCount(ISteamFriends, friendsGroupID);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamFriends_GetClanCount;

	ISteamFriends_GetClanCount = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanCount");
	result = ISteamFriends_GetClanCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCountFromSource(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDSource;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetFriendCountFromSource;

	steamIDSource = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendCountFromSource = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCountFromSource");
	result = ISteamFriends_GetFriendCountFromSource(ISteamFriends, steamIDSource);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetSmallFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetSmallFriendAvatar;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetSmallFriendAvatar = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetSmallFriendAvatar");
	result = ISteamFriends_GetSmallFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetMediumFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetMediumFriendAvatar;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetMediumFriendAvatar = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetMediumFriendAvatar");
	result = ISteamFriends_GetMediumFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetLargeFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetLargeFriendAvatar;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetLargeFriendAvatar = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetLargeFriendAvatar");
	result = ISteamFriends_GetLargeFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOfficerCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetClanOfficerCount;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanOfficerCount = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerCount");
	result = ISteamFriends_GetClanOfficerCount(ISteamFriends, steamIDClan);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetFriendRichPresenceKeyCount;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendRichPresenceKeyCount = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount");
	result = ISteamFriends_GetFriendRichPresenceKeyCount(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetCoplayFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamFriends_GetCoplayFriendCount;

	ISteamFriends_GetCoplayFriendCount = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriendCount");
	result = ISteamFriends_GetCoplayFriendCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCoplayTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetFriendCoplayTime;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendCoplayTime = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayTime");
	result = ISteamFriends_GetFriendCoplayTime(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanChatMemberCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetClanChatMemberCount;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanChatMemberCount = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanChatMemberCount");
	result = ISteamFriends_GetClanChatMemberCount(ISteamFriends, steamIDClan);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamFriends_GetNumChatsWithUnreadPriorityMessages;

	ISteamFriends_GetNumChatsWithUnreadPriorityMessages = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages");
	result = ISteamFriends_GetNumChatsWithUnreadPriorityMessages(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendGamePlayed(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	FriendGameInfo_t pFriendGameInfo;
	bool result;
	FuncPtr_027 ISteamFriends_GetFriendGamePlayed;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_GetFriendGamePlayed = (FuncPtr_027)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendGamePlayed");
	result = ISteamFriends_GetFriendGamePlayed(ISteamFriends, steamIDFriend, &pFriendGameInfo);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_new_object();
	push_uint64_t_to_str(pFriendGameInfo.m_gameID);
	jsal_put_prop_string(-2, "m_gameID");
	jsal_push_uint(pFriendGameInfo.m_unGameIP);
	jsal_put_prop_string(-2, "m_unGameIP");
	jsal_push_uint(pFriendGameInfo.m_usGamePort);
	jsal_put_prop_string(-2, "m_usGamePort");
	jsal_push_uint(pFriendGameInfo.m_usQueryPort);
	jsal_put_prop_string(-2, "m_usQueryPort");
	push_uint64_t_to_str(pFriendGameInfo.m_steamIDLobby);
	jsal_put_prop_string(-2, "m_steamIDLobby");
	jsal_put_prop_string(-2, "pFriendGameInfo");

	return true;
}

static bool
js_ISteamFriends_HasFriend(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iFriendFlags;
	bool result;
	FuncPtr_034 ISteamFriends_HasFriend;

	steamIDFriend = require_str_to_uint64_t(0);
	iFriendFlags = jsal_require_int(1);

	ISteamFriends_HasFriend = (FuncPtr_034)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_HasFriend");
	result = ISteamFriends_HasFriend(ISteamFriends, steamIDFriend, iFriendFlags);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_GetClanActivityCounts(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t pnOnline;
	int32_t pnInGame;
	int32_t pnChatting;
	bool result;
	FuncPtr_036 ISteamFriends_GetClanActivityCounts;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_GetClanActivityCounts = (FuncPtr_036)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanActivityCounts");
	result = ISteamFriends_GetClanActivityCounts(ISteamFriends, steamIDClan, &pnOnline, &pnInGame, &pnChatting);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pnOnline);
	jsal_put_prop_string(-2, "pnOnline");
	jsal_push_int(pnInGame);
	jsal_put_prop_string(-2, "pnInGame");
	jsal_push_int(pnChatting);
	jsal_put_prop_string(-2, "pnChatting");

	return true;
}

static bool
js_ISteamFriends_IsUserInSource(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	uint64_t steamIDSource;
	bool result;
	FuncPtr_039 ISteamFriends_IsUserInSource;

	steamIDUser = require_str_to_uint64_t(0);
	steamIDSource = require_str_to_uint64_t(1);

	ISteamFriends_IsUserInSource = (FuncPtr_039)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsUserInSource");
	result = ISteamFriends_IsUserInSource(ISteamFriends, steamIDUser, steamIDSource);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_RequestUserInformation(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	bool bRequireNameOnly;
	bool result;
	FuncPtr_045 ISteamFriends_RequestUserInformation;

	steamIDUser = require_str_to_uint64_t(0);
	bRequireNameOnly = jsal_require_boolean(1);

	ISteamFriends_RequestUserInformation = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestUserInformation");
	result = ISteamFriends_RequestUserInformation(ISteamFriends, steamIDUser, bRequireNameOnly);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SetRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_047 ISteamFriends_SetRichPresence;

	pchKey = (char*)jsal_require_string(0);
	pchValue = (char*)jsal_require_string(1);

	ISteamFriends_SetRichPresence = (FuncPtr_047)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetRichPresence");
	result = ISteamFriends_SetRichPresence(ISteamFriends, pchKey, pchValue);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_InviteUserToGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchConnectString;
	bool result;
	FuncPtr_049 ISteamFriends_InviteUserToGame;

	steamIDFriend = require_str_to_uint64_t(0);
	pchConnectString = (char*)jsal_require_string(1);

	ISteamFriends_InviteUserToGame = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_InviteUserToGame");
	result = ISteamFriends_InviteUserToGame(ISteamFriends, steamIDFriend, pchConnectString);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_LeaveClanChatRoom(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_050 ISteamFriends_LeaveClanChatRoom;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_LeaveClanChatRoom = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_LeaveClanChatRoom");
	result = ISteamFriends_LeaveClanChatRoom(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SendClanChatMessage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	const char * pchText;
	bool result;
	FuncPtr_049 ISteamFriends_SendClanChatMessage;

	steamIDClanChat = require_str_to_uint64_t(0);
	pchText = (char*)jsal_require_string(1);

	ISteamFriends_SendClanChatMessage = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SendClanChatMessage");
	result = ISteamFriends_SendClanChatMessage(ISteamFriends, steamIDClanChat, pchText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanChatAdmin(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	uint64_t steamIDUser;
	bool result;
	FuncPtr_039 ISteamFriends_IsClanChatAdmin;

	steamIDClanChat = require_str_to_uint64_t(0);
	steamIDUser = require_str_to_uint64_t(1);

	ISteamFriends_IsClanChatAdmin = (FuncPtr_039)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanChatAdmin");
	result = ISteamFriends_IsClanChatAdmin(ISteamFriends, steamIDClanChat, steamIDUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanChatWindowOpenInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_050 ISteamFriends_IsClanChatWindowOpenInSteam;

	steamIDClanChat = require_str_to_uint64_t(0);

	ISteamFriends_IsClanChatWindowOpenInSteam = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam");
	result = ISteamFriends_IsClanChatWindowOpenInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_OpenClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_050 ISteamFriends_OpenClanChatWindowInSteam;

	steamIDClanChat = require_str_to_uint64_t(0);

	ISteamFriends_OpenClanChatWindowInSteam = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_OpenClanChatWindowInSteam");
	result = ISteamFriends_OpenClanChatWindowInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_CloseClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_050 ISteamFriends_CloseClanChatWindowInSteam;

	steamIDClanChat = require_str_to_uint64_t(0);

	ISteamFriends_CloseClanChatWindowInSteam = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_CloseClanChatWindowInSteam");
	result = ISteamFriends_CloseClanChatWindowInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SetListenForFriendsMessages(int num_args, bool is_ctor, intptr_t magic)
{
	bool bInterceptEnabled;
	bool result;
	FuncPtr_051 ISteamFriends_SetListenForFriendsMessages;

	bInterceptEnabled = jsal_require_boolean(0);

	ISteamFriends_SetListenForFriendsMessages = (FuncPtr_051)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetListenForFriendsMessages");
	result = ISteamFriends_SetListenForFriendsMessages(ISteamFriends, bInterceptEnabled);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_ReplyToFriendMessage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchMsgToSend;
	bool result;
	FuncPtr_049 ISteamFriends_ReplyToFriendMessage;

	steamIDFriend = require_str_to_uint64_t(0);
	pchMsgToSend = (char*)jsal_require_string(1);

	ISteamFriends_ReplyToFriendMessage = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ReplyToFriendMessage");
	result = ISteamFriends_ReplyToFriendMessage(ISteamFriends, steamIDFriend, pchMsgToSend);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanPublic(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_050 ISteamFriends_IsClanPublic;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_IsClanPublic = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanPublic");
	result = ISteamFriends_IsClanPublic(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanOfficialGameGroup(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_050 ISteamFriends_IsClanOfficialGameGroup;

	steamIDClan = require_str_to_uint64_t(0);

	ISteamFriends_IsClanOfficialGameGroup = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanOfficialGameGroup");
	result = ISteamFriends_IsClanOfficialGameGroup(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_RegisterProtocolInOverlayBrowser(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchProtocol;
	bool result;
	FuncPtr_053 ISteamFriends_RegisterProtocolInOverlayBrowser;

	pchProtocol = (char*)jsal_require_string(0);

	ISteamFriends_RegisterProtocolInOverlayBrowser = (FuncPtr_053)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser");
	result = ISteamFriends_RegisterProtocolInOverlayBrowser(ISteamFriends, pchProtocol);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_BHasEquippedProfileItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	bool result;
	FuncPtr_054 ISteamFriends_BHasEquippedProfileItem;

	steamID = require_str_to_uint64_t(0);
	itemType = jsal_require_uint(1);

	ISteamFriends_BHasEquippedProfileItem = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_BHasEquippedProfileItem");
	result = ISteamFriends_BHasEquippedProfileItem(ISteamFriends, steamID, itemType);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupIDByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFG;
	int16_t result;
	FuncPtr_030 ISteamFriends_GetFriendsGroupIDByIndex;

	iFG = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupIDByIndex = (FuncPtr_030)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex");
	result = ISteamFriends_GetFriendsGroupIDByIndex(ISteamFriends, iFG);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupMembersList(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	uint64_t * pOutSteamIDMembers;
	int32_t nMembersCount;
	FuncPtr_033 ISteamFriends_GetFriendsGroupMembersList;

	friendsGroupID = jsal_require_int(0);
	nMembersCount = jsal_require_int(1);

	if (!(pOutSteamIDMembers = (uint64_t *)calloc(nMembersCount, sizeof(uint64_t))))
		return false;

	ISteamFriends_GetFriendsGroupMembersList = (FuncPtr_033)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersList");
	ISteamFriends_GetFriendsGroupMembersList(ISteamFriends, friendsGroupID, pOutSteamIDMembers, nMembersCount);

	int pOutSteamIDMembersIndex;
	jsal_push_new_array();
	for (pOutSteamIDMembersIndex = 0; pOutSteamIDMembersIndex < (int)nMembersCount; ++pOutSteamIDMembersIndex)
	{
		push_uint64_t_to_str(pOutSteamIDMembers[pOutSteamIDMembersIndex]);
		jsal_put_prop_index(-2, pOutSteamIDMembersIndex);
	}

	free (pOutSteamIDMembers);

	free(pOutSteamIDMembers);

	return true;
}

static bool
js_ISteamFriends_SetInGameVoiceSpeaking(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	bool bSpeaking;
	FuncPtr_040 ISteamFriends_SetInGameVoiceSpeaking;

	steamIDUser = require_str_to_uint64_t(0);
	bSpeaking = jsal_require_boolean(1);

	ISteamFriends_SetInGameVoiceSpeaking = (FuncPtr_040)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetInGameVoiceSpeaking");
	ISteamFriends_SetInGameVoiceSpeaking(ISteamFriends, steamIDUser, bSpeaking);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlay(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchDialog;
	FuncPtr_041 ISteamFriends_ActivateGameOverlay;

	pchDialog = (char*)jsal_require_string(0);

	ISteamFriends_ActivateGameOverlay = (FuncPtr_041)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlay");
	ISteamFriends_ActivateGameOverlay(ISteamFriends, pchDialog);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToUser(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchDialog;
	uint64_t steamID;
	FuncPtr_042 ISteamFriends_ActivateGameOverlayToUser;

	pchDialog = (char*)jsal_require_string(0);
	steamID = require_str_to_uint64_t(1);

	ISteamFriends_ActivateGameOverlayToUser = (FuncPtr_042)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToUser");
	ISteamFriends_ActivateGameOverlayToUser(ISteamFriends, pchDialog, steamID);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToWebPage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchURL;
	uint32_t eMode;
	FuncPtr_043 ISteamFriends_ActivateGameOverlayToWebPage;

	pchURL = (char*)jsal_require_string(0);
	eMode = jsal_require_uint(1);

	ISteamFriends_ActivateGameOverlayToWebPage = (FuncPtr_043)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage");
	ISteamFriends_ActivateGameOverlayToWebPage(ISteamFriends, pchURL, eMode);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToStore(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint32_t eFlag;
	FuncPtr_044 ISteamFriends_ActivateGameOverlayToStore;

	nAppID = jsal_require_uint(0);
	eFlag = jsal_require_uint(1);

	ISteamFriends_ActivateGameOverlayToStore = (FuncPtr_044)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToStore");
	ISteamFriends_ActivateGameOverlayToStore(ISteamFriends, nAppID, eFlag);

	return false;
}

static bool
js_ISteamFriends_SetPlayedWith(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUserPlayedWith;
	FuncPtr_015 ISteamFriends_SetPlayedWith;

	steamIDUserPlayedWith = require_str_to_uint64_t(0);

	ISteamFriends_SetPlayedWith = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetPlayedWith");
	ISteamFriends_SetPlayedWith(ISteamFriends, steamIDUserPlayedWith);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDLobby;
	FuncPtr_015 ISteamFriends_ActivateGameOverlayInviteDialog;

	steamIDLobby = require_str_to_uint64_t(0);

	ISteamFriends_ActivateGameOverlayInviteDialog = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog");
	ISteamFriends_ActivateGameOverlayInviteDialog(ISteamFriends, steamIDLobby);

	return false;
}

static bool
js_ISteamFriends_ClearRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamFriends_ClearRichPresence;

	ISteamFriends_ClearRichPresence = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ClearRichPresence");
	ISteamFriends_ClearRichPresence(ISteamFriends);

	return false;
}

static bool
js_ISteamFriends_RequestFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	FuncPtr_015 ISteamFriends_RequestFriendRichPresence;

	steamIDFriend = require_str_to_uint64_t(0);

	ISteamFriends_RequestFriendRichPresence = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestFriendRichPresence");
	ISteamFriends_RequestFriendRichPresence(ISteamFriends, steamIDFriend);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDLobby;
	FuncPtr_015 ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog;

	steamIDLobby = require_str_to_uint64_t(0);

	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog");
	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(ISteamFriends, steamIDLobby);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchConnectString;
	FuncPtr_041 ISteamFriends_ActivateGameOverlayInviteDialogConnectString;

	pchConnectString = (char*)jsal_require_string(0);

	ISteamFriends_ActivateGameOverlayInviteDialogConnectString = (FuncPtr_041)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString");
	ISteamFriends_ActivateGameOverlayInviteDialogConnectString(ISteamFriends, pchConnectString);

	return false;
}

static bool
js_ISteamUtils_GetSecondsSinceAppActive(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetSecondsSinceAppActive;

	ISteamUtils_GetSecondsSinceAppActive = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceAppActive");
	result = ISteamUtils_GetSecondsSinceAppActive(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetSecondsSinceComputerActive(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetSecondsSinceComputerActive;

	ISteamUtils_GetSecondsSinceComputerActive = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceComputerActive");
	result = ISteamUtils_GetSecondsSinceComputerActive(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetConnectedUniverse(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetConnectedUniverse;

	ISteamUtils_GetConnectedUniverse = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetConnectedUniverse");
	result = ISteamUtils_GetConnectedUniverse(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetServerRealTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetServerRealTime;

	ISteamUtils_GetServerRealTime = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetServerRealTime");
	result = ISteamUtils_GetServerRealTime(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetAppID(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetAppID;

	ISteamUtils_GetAppID = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetAppID");
	result = ISteamUtils_GetAppID(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetAPICallFailureReason(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamAPICall;
	uint32_t result;
	FuncPtr_025 ISteamUtils_GetAPICallFailureReason;

	hSteamAPICall = require_str_to_uint64_t(0);

	ISteamUtils_GetAPICallFailureReason = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetAPICallFailureReason");
	result = ISteamUtils_GetAPICallFailureReason(ISteamUtils, hSteamAPICall);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPCCallCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetIPCCallCount;

	ISteamUtils_GetIPCCallCount = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPCCallCount");
	result = ISteamUtils_GetIPCCallCount(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetEnteredGamepadTextLength(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUtils_GetEnteredGamepadTextLength;

	ISteamUtils_GetEnteredGamepadTextLength = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextLength");
	result = ISteamUtils_GetEnteredGamepadTextLength(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPv6ConnectivityState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eProtocol;
	uint32_t result;
	FuncPtr_066 ISteamUtils_GetIPv6ConnectivityState;

	eProtocol = jsal_require_uint(0);

	ISteamUtils_GetIPv6ConnectivityState = (FuncPtr_066)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPv6ConnectivityState");
	result = ISteamUtils_GetIPv6ConnectivityState(ISteamUtils, eProtocol);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPCountry(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_022 ISteamUtils_GetIPCountry;

	ISteamUtils_GetIPCountry = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPCountry");
	result = ISteamUtils_GetIPCountry(ISteamUtils);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUtils_GetSteamUILanguage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_022 ISteamUtils_GetSteamUILanguage;

	ISteamUtils_GetSteamUILanguage = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSteamUILanguage");
	result = ISteamUtils_GetSteamUILanguage(ISteamUtils);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUtils_GetImageSize(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iImage;
	uint32_t pnWidth;
	uint32_t pnHeight;
	bool result;
	FuncPtr_057 ISteamUtils_GetImageSize;

	iImage = jsal_require_int(0);

	ISteamUtils_GetImageSize = (FuncPtr_057)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetImageSize");
	result = ISteamUtils_GetImageSize(ISteamUtils, iImage, &pnWidth, &pnHeight);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pnWidth);
	jsal_put_prop_string(-2, "pnWidth");
	jsal_push_uint(pnHeight);
	jsal_put_prop_string(-2, "pnHeight");

	return true;
}

static bool
js_ISteamUtils_GetImageRGBA(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iImage;
	uint8_t * pubDest;
	int32_t nDestBufferSize;
	bool result;
	FuncPtr_058 ISteamUtils_GetImageRGBA;

	iImage = jsal_require_int(0);
	nDestBufferSize = jsal_require_int(1);

	if (!(pubDest = (uint8_t *)calloc(nDestBufferSize, sizeof(uint8_t))))
		return false;

	ISteamUtils_GetImageRGBA = (FuncPtr_058)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetImageRGBA");
	result = ISteamUtils_GetImageRGBA(ISteamUtils, iImage, pubDest, nDestBufferSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	int pubDestIndex;
	jsal_push_new_array();
	for (pubDestIndex = 0; pubDestIndex < (int)nDestBufferSize; ++pubDestIndex)
	{
		jsal_push_uint(pubDest[pubDestIndex]);
		jsal_put_prop_index(-2, pubDestIndex);
	}
	jsal_put_prop_string(-2, "pubDest");

	free(pubDest);

	return true;
}

static bool
js_ISteamUtils_IsAPICallCompleted(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamAPICall;
	bool pbFailed;
	bool result;
	FuncPtr_060 ISteamUtils_IsAPICallCompleted;

	hSteamAPICall = require_str_to_uint64_t(0);

	ISteamUtils_IsAPICallCompleted = (FuncPtr_060)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsAPICallCompleted");
	result = ISteamUtils_IsAPICallCompleted(ISteamUtils, hSteamAPICall, &pbFailed);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbFailed);
	jsal_put_prop_string(-2, "pbFailed");

	return true;
}

static bool
js_ISteamUtils_IsOverlayEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsOverlayEnabled;

	ISteamUtils_IsOverlayEnabled = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsOverlayEnabled");
	result = ISteamUtils_IsOverlayEnabled(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_BOverlayNeedsPresent(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_BOverlayNeedsPresent;

	ISteamUtils_BOverlayNeedsPresent = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_BOverlayNeedsPresent");
	result = ISteamUtils_BOverlayNeedsPresent(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_ShowGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eInputMode;
	uint32_t eLineInputMode;
	const char * pchDescription;
	uint32_t unCharMax;
	const char * pchExistingText;
	bool result;
	FuncPtr_061 ISteamUtils_ShowGamepadTextInput;

	eInputMode = jsal_require_uint(0);
	eLineInputMode = jsal_require_uint(1);
	pchDescription = (char*)jsal_require_string(2);
	unCharMax = jsal_require_uint(3);
	pchExistingText = (char*)jsal_require_string(4);

	ISteamUtils_ShowGamepadTextInput = (FuncPtr_061)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_ShowGamepadTextInput");
	result = ISteamUtils_ShowGamepadTextInput(ISteamUtils, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_GetEnteredGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchText;
	uint32_t cchText;
	bool result;
	FuncPtr_062 ISteamUtils_GetEnteredGamepadTextInput;

	cchText = jsal_require_uint(0);

	if (!(pchText = (char *)calloc(cchText, sizeof(char))))
		return false;

	ISteamUtils_GetEnteredGamepadTextInput = (FuncPtr_062)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextInput");
	result = ISteamUtils_GetEnteredGamepadTextInput(ISteamUtils, pchText, cchText);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchText);
	jsal_put_prop_string(-2, "pchText");

	free(pchText);

	return true;
}

static bool
js_ISteamUtils_IsSteamRunningInVR(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsSteamRunningInVR;

	ISteamUtils_IsSteamRunningInVR = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningInVR");
	result = ISteamUtils_IsSteamRunningInVR(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamInBigPictureMode(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsSteamInBigPictureMode;

	ISteamUtils_IsSteamInBigPictureMode = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamInBigPictureMode");
	result = ISteamUtils_IsSteamInBigPictureMode(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsVRHeadsetStreamingEnabled;

	ISteamUtils_IsVRHeadsetStreamingEnabled = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled");
	result = ISteamUtils_IsVRHeadsetStreamingEnabled(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamChinaLauncher(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsSteamChinaLauncher;

	ISteamUtils_IsSteamChinaLauncher = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamChinaLauncher");
	result = ISteamUtils_IsSteamChinaLauncher(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_InitFilterText(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t unFilterOptions;
	bool result;
	FuncPtr_021 ISteamUtils_InitFilterText;

	unFilterOptions = jsal_require_uint(0);

	ISteamUtils_InitFilterText = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_InitFilterText");
	result = ISteamUtils_InitFilterText(ISteamUtils, unFilterOptions);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamRunningOnSteamDeck(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_IsSteamRunningOnSteamDeck;

	ISteamUtils_IsSteamRunningOnSteamDeck = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck");
	result = ISteamUtils_IsSteamRunningOnSteamDeck(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_ShowFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eKeyboardMode;
	int32_t nTextFieldXPosition;
	int32_t nTextFieldYPosition;
	int32_t nTextFieldWidth;
	int32_t nTextFieldHeight;
	bool result;
	FuncPtr_067 ISteamUtils_ShowFloatingGamepadTextInput;

	eKeyboardMode = jsal_require_uint(0);
	nTextFieldXPosition = jsal_require_int(1);
	nTextFieldYPosition = jsal_require_int(2);
	nTextFieldWidth = jsal_require_int(3);
	nTextFieldHeight = jsal_require_int(4);

	ISteamUtils_ShowFloatingGamepadTextInput = (FuncPtr_067)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput");
	result = ISteamUtils_ShowFloatingGamepadTextInput(ISteamUtils, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_DismissFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUtils_DismissFloatingGamepadTextInput;

	ISteamUtils_DismissFloatingGamepadTextInput = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput");
	result = ISteamUtils_DismissFloatingGamepadTextInput(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_GetCurrentBatteryPower(int num_args, bool is_ctor, intptr_t magic)
{
	uint8_t result;
	FuncPtr_059 ISteamUtils_GetCurrentBatteryPower;

	ISteamUtils_GetCurrentBatteryPower = (FuncPtr_059)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetCurrentBatteryPower");
	result = ISteamUtils_GetCurrentBatteryPower(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_SetOverlayNotificationPosition(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eNotificationPosition;
	FuncPtr_016 ISteamUtils_SetOverlayNotificationPosition;

	eNotificationPosition = jsal_require_uint(0);

	ISteamUtils_SetOverlayNotificationPosition = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationPosition");
	ISteamUtils_SetOverlayNotificationPosition(ISteamUtils, eNotificationPosition);

	return false;
}

static bool
js_ISteamUtils_SetOverlayNotificationInset(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nHorizontalInset;
	int32_t nVerticalInset;
	FuncPtr_063 ISteamUtils_SetOverlayNotificationInset;

	nHorizontalInset = jsal_require_int(0);
	nVerticalInset = jsal_require_int(1);

	ISteamUtils_SetOverlayNotificationInset = (FuncPtr_063)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationInset");
	ISteamUtils_SetOverlayNotificationInset(ISteamUtils, nHorizontalInset, nVerticalInset);

	return false;
}

static bool
js_ISteamUtils_StartVRDashboard(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamUtils_StartVRDashboard;

	ISteamUtils_StartVRDashboard = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_StartVRDashboard");
	ISteamUtils_StartVRDashboard(ISteamUtils);

	return false;
}

static bool
js_ISteamUtils_SetVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool bEnabled;
	FuncPtr_064 ISteamUtils_SetVRHeadsetStreamingEnabled;

	bEnabled = jsal_require_boolean(0);

	ISteamUtils_SetVRHeadsetStreamingEnabled = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled");
	ISteamUtils_SetVRHeadsetStreamingEnabled(ISteamUtils, bEnabled);

	return false;
}

static bool
js_ISteamUtils_SetGameLauncherMode(int num_args, bool is_ctor, intptr_t magic)
{
	bool bLauncherMode;
	FuncPtr_064 ISteamUtils_SetGameLauncherMode;

	bLauncherMode = jsal_require_boolean(0);

	ISteamUtils_SetGameLauncherMode = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetGameLauncherMode");
	ISteamUtils_SetGameLauncherMode(ISteamUtils, bLauncherMode);

	return false;
}

static bool
js_ISteamUtils_CheckFileSignature(int num_args, bool is_ctor, intptr_t magic)
{
	const char * szFileName;
	uint64_t result;
	FuncPtr_020 ISteamUtils_CheckFileSignature;

	szFileName = (char*)jsal_require_string(0);

	ISteamUtils_CheckFileSignature = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_CheckFileSignature");
	result = ISteamUtils_CheckFileSignature(ISteamUtils, szFileName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUtils_FilterText(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eContext;
	uint64_t sourceSteamID;
	const char * pchInputMessage;
	char * pchOutFilteredText;
	uint32_t nByteSizeOutFilteredText;
	int32_t result;
	FuncPtr_065 ISteamUtils_FilterText;

	eContext = jsal_require_uint(0);
	sourceSteamID = require_str_to_uint64_t(1);
	pchInputMessage = (char*)jsal_require_string(2);
	nByteSizeOutFilteredText = jsal_require_uint(3);

	if (!(pchOutFilteredText = (char *)calloc(nByteSizeOutFilteredText, sizeof(char))))
		return false;

	ISteamUtils_FilterText = (FuncPtr_065)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_FilterText");
	result = ISteamUtils_FilterText(ISteamUtils, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchOutFilteredText);
	jsal_put_prop_string(-2, "pchOutFilteredText");

	free(pchOutFilteredText);

	return true;
}

static bool
js_ISteamUserStats_RequestCurrentStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUserStats_RequestCurrentStats;

	ISteamUserStats_RequestCurrentStats = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_RequestCurrentStats");
	result = ISteamUserStats_RequestCurrentStats(ISteamUserStats);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t pData;
	bool result;
	FuncPtr_068 ISteamUserStats_GetStatInt32;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetStatInt32 = (FuncPtr_068)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetStatInt32");
	result = ISteamUserStats_GetStatInt32(ISteamUserStats, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pData;
	bool result;
	FuncPtr_069 ISteamUserStats_GetStatFloat;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetStatFloat = (FuncPtr_069)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetStatFloat");
	result = ISteamUserStats_GetStatFloat(ISteamUserStats, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_SetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t nData;
	bool result;
	FuncPtr_070 ISteamUserStats_SetStatInt32;

	pchName = (char*)jsal_require_string(0);
	nData = jsal_require_int(1);

	ISteamUserStats_SetStatInt32 = (FuncPtr_070)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetStatInt32");
	result = ISteamUserStats_SetStatInt32(ISteamUserStats, pchName, nData);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_SetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float fData;
	bool result;
	FuncPtr_071 ISteamUserStats_SetStatFloat;

	pchName = (char*)jsal_require_string(0);
	fData = jsal_require_number(1);

	ISteamUserStats_SetStatFloat = (FuncPtr_071)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetStatFloat");
	result = ISteamUserStats_SetStatFloat(ISteamUserStats, pchName, fData);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_UpdateAvgRateStat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float flCountThisSession;
	double dSessionLength;
	bool result;
	FuncPtr_072 ISteamUserStats_UpdateAvgRateStat;

	pchName = (char*)jsal_require_string(0);
	flCountThisSession = jsal_require_number(1);
	dSessionLength = jsal_require_number(2);

	ISteamUserStats_UpdateAvgRateStat = (FuncPtr_072)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_UpdateAvgRateStat");
	result = ISteamUserStats_UpdateAvgRateStat(ISteamUserStats, pchName, flCountThisSession, dSessionLength);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool pbAchieved;
	bool result;
	FuncPtr_073 ISteamUserStats_GetAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievement = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievement");
	result = ISteamUserStats_GetAchievement(ISteamUserStats, pchName, &pbAchieved);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_SetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool result;
	FuncPtr_053 ISteamUserStats_SetAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_SetAchievement = (FuncPtr_053)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetAchievement");
	result = ISteamUserStats_SetAchievement(ISteamUserStats, pchName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_ClearAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool result;
	FuncPtr_053 ISteamUserStats_ClearAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_ClearAchievement = (FuncPtr_053)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_ClearAchievement");
	result = ISteamUserStats_ClearAchievement(ISteamUserStats, pchName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool pbAchieved;
	uint32_t punUnlockTime;
	bool result;
	FuncPtr_074 ISteamUserStats_GetAchievementAndUnlockTime;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementAndUnlockTime = (FuncPtr_074)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime");
	result = ISteamUserStats_GetAchievementAndUnlockTime(ISteamUserStats, pchName, &pbAchieved, &punUnlockTime);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");
	jsal_push_uint(punUnlockTime);
	jsal_put_prop_string(-2, "punUnlockTime");

	return true;
}

static bool
js_ISteamUserStats_StoreStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUserStats_StoreStats;

	ISteamUserStats_StoreStats = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_StoreStats");
	result = ISteamUserStats_StoreStats(ISteamUserStats);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_IndicateAchievementProgress(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	uint32_t nCurProgress;
	uint32_t nMaxProgress;
	bool result;
	FuncPtr_077 ISteamUserStats_IndicateAchievementProgress;

	pchName = (char*)jsal_require_string(0);
	nCurProgress = jsal_require_uint(1);
	nMaxProgress = jsal_require_uint(2);

	ISteamUserStats_IndicateAchievementProgress = (FuncPtr_077)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_IndicateAchievementProgress");
	result = ISteamUserStats_IndicateAchievementProgress(ISteamUserStats, pchName, nCurProgress, nMaxProgress);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetUserStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	int32_t pData;
	bool result;
	FuncPtr_079 ISteamUserStats_GetUserStatInt32;

	steamIDUser = require_str_to_uint64_t(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserStatInt32 = (FuncPtr_079)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserStatInt32");
	result = ISteamUserStats_GetUserStatInt32(ISteamUserStats, steamIDUser, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetUserStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	float pData;
	bool result;
	FuncPtr_080 ISteamUserStats_GetUserStatFloat;

	steamIDUser = require_str_to_uint64_t(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserStatFloat = (FuncPtr_080)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserStatFloat");
	result = ISteamUserStats_GetUserStatFloat(ISteamUserStats, steamIDUser, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	bool pbAchieved;
	bool result;
	FuncPtr_081 ISteamUserStats_GetUserAchievement;

	steamIDUser = require_str_to_uint64_t(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserAchievement = (FuncPtr_081)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievement");
	result = ISteamUserStats_GetUserAchievement(ISteamUserStats, steamIDUser, pchName, &pbAchieved);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_GetUserAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	bool pbAchieved;
	uint32_t punUnlockTime;
	bool result;
	FuncPtr_082 ISteamUserStats_GetUserAchievementAndUnlockTime;

	steamIDUser = require_str_to_uint64_t(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserAchievementAndUnlockTime = (FuncPtr_082)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime");
	result = ISteamUserStats_GetUserAchievementAndUnlockTime(ISteamUserStats, steamIDUser, pchName, &pbAchieved, &punUnlockTime);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");
	jsal_push_uint(punUnlockTime);
	jsal_put_prop_string(-2, "punUnlockTime");

	return true;
}

static bool
js_ISteamUserStats_ResetAllStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool bAchievementsToo;
	bool result;
	FuncPtr_051 ISteamUserStats_ResetAllStats;

	bAchievementsToo = jsal_require_boolean(0);

	ISteamUserStats_ResetAllStats = (FuncPtr_051)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_ResetAllStats");
	result = ISteamUserStats_ResetAllStats(ISteamUserStats, bAchievementsToo);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetDownloadedLeaderboardEntry(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboardEntries;
	int32_t index;
	LeaderboardEntry_t pLeaderboardEntry;
	int32_t * pDetails;
	int32_t cDetailsMax;
	bool result;
	FuncPtr_086 ISteamUserStats_GetDownloadedLeaderboardEntry;

	hSteamLeaderboardEntries = require_str_to_uint64_t(0);
	index = jsal_require_int(1);
	cDetailsMax = jsal_require_int(2);

	if (!(pDetails = (int32_t *)calloc(cDetailsMax, sizeof(int32_t))))
		return false;

	ISteamUserStats_GetDownloadedLeaderboardEntry = (FuncPtr_086)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry");
	result = ISteamUserStats_GetDownloadedLeaderboardEntry(ISteamUserStats, hSteamLeaderboardEntries, index, &pLeaderboardEntry, pDetails, cDetailsMax);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_new_object();
	push_uint64_t_to_str(pLeaderboardEntry.m_steamIDUser);
	jsal_put_prop_string(-2, "m_steamIDUser");
	jsal_push_int(pLeaderboardEntry.m_nGlobalRank);
	jsal_put_prop_string(-2, "m_nGlobalRank");
	jsal_push_int(pLeaderboardEntry.m_nScore);
	jsal_put_prop_string(-2, "m_nScore");
	jsal_push_int(pLeaderboardEntry.m_cDetails);
	jsal_put_prop_string(-2, "m_cDetails");
	push_uint64_t_to_str(pLeaderboardEntry.m_hUGC);
	jsal_put_prop_string(-2, "m_hUGC");
	jsal_put_prop_string(-2, "pLeaderboardEntry");
	int pDetailsIndex;
	jsal_push_new_array();
	for (pDetailsIndex = 0; pDetailsIndex < (int)cDetailsMax; ++pDetailsIndex)
	{
		jsal_push_int(pDetails[pDetailsIndex]);
		jsal_put_prop_index(-2, pDetailsIndex);
	}
	jsal_put_prop_string(-2, "pDetails");

	free(pDetails);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementAchievedPercent(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pflPercent;
	bool result;
	FuncPtr_069 ISteamUserStats_GetAchievementAchievedPercent;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementAchievedPercent = (FuncPtr_069)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAchievedPercent");
	result = ISteamUserStats_GetAchievementAchievedPercent(ISteamUserStats, pchName, &pflPercent);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatInt64(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	int64_t pData;
	bool result;
	FuncPtr_091 ISteamUserStats_GetGlobalStatInt64;

	pchStatName = (char*)jsal_require_string(0);

	ISteamUserStats_GetGlobalStatInt64 = (FuncPtr_091)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatInt64");
	result = ISteamUserStats_GetGlobalStatInt64(ISteamUserStats, pchStatName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	push_int64_t_to_str(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatDouble(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	double pData;
	bool result;
	FuncPtr_092 ISteamUserStats_GetGlobalStatDouble;

	pchStatName = (char*)jsal_require_string(0);

	ISteamUserStats_GetGlobalStatDouble = (FuncPtr_092)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatDouble");
	result = ISteamUserStats_GetGlobalStatDouble(ISteamUserStats, pchStatName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t pnMinProgress;
	int32_t pnMaxProgress;
	bool result;
	FuncPtr_095 ISteamUserStats_GetAchievementProgressLimitsInt32;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementProgressLimitsInt32 = (FuncPtr_095)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32");
	result = ISteamUserStats_GetAchievementProgressLimitsInt32(ISteamUserStats, pchName, &pnMinProgress, &pnMaxProgress);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pnMinProgress);
	jsal_put_prop_string(-2, "pnMinProgress");
	jsal_push_int(pnMaxProgress);
	jsal_put_prop_string(-2, "pnMaxProgress");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pfMinProgress;
	float pfMaxProgress;
	bool result;
	FuncPtr_096 ISteamUserStats_GetAchievementProgressLimitsFloat;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementProgressLimitsFloat = (FuncPtr_096)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat");
	result = ISteamUserStats_GetAchievementProgressLimitsFloat(ISteamUserStats, pchName, &pfMinProgress, &pfMaxProgress);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pfMinProgress);
	jsal_put_prop_string(-2, "pfMinProgress");
	jsal_push_number(pfMaxProgress);
	jsal_put_prop_string(-2, "pfMaxProgress");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementIcon(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t result;
	FuncPtr_075 ISteamUserStats_GetAchievementIcon;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementIcon = (FuncPtr_075)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementIcon");
	result = ISteamUserStats_GetAchievementIcon(ISteamUserStats, pchName);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardEntryCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	int32_t result;
	FuncPtr_029 ISteamUserStats_GetLeaderboardEntryCount;

	hSteamLeaderboard = require_str_to_uint64_t(0);

	ISteamUserStats_GetLeaderboardEntryCount = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardEntryCount");
	result = ISteamUserStats_GetLeaderboardEntryCount(ISteamUserStats, hSteamLeaderboard);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUserStats_GetMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchName;
	uint32_t unNameBufLen;
	float pflPercent;
	bool pbAchieved;
	int32_t result;
	FuncPtr_089 ISteamUserStats_GetMostAchievedAchievementInfo;

	unNameBufLen = jsal_require_uint(0);

	if (!(pchName = (char *)calloc(unNameBufLen, sizeof(char))))
		return false;

	ISteamUserStats_GetMostAchievedAchievementInfo = (FuncPtr_089)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo");
	result = ISteamUserStats_GetMostAchievedAchievementInfo(ISteamUserStats, pchName, unNameBufLen, &pflPercent, &pbAchieved);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchName);
	jsal_put_prop_string(-2, "pchName");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	free(pchName);

	return true;
}

static bool
js_ISteamUserStats_GetNextMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iIteratorPrevious;
	char * pchName;
	uint32_t unNameBufLen;
	float pflPercent;
	bool pbAchieved;
	int32_t result;
	FuncPtr_090 ISteamUserStats_GetNextMostAchievedAchievementInfo;

	iIteratorPrevious = jsal_require_int(0);
	unNameBufLen = jsal_require_uint(1);

	if (!(pchName = (char *)calloc(unNameBufLen, sizeof(char))))
		return false;

	ISteamUserStats_GetNextMostAchievedAchievementInfo = (FuncPtr_090)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo");
	result = ISteamUserStats_GetNextMostAchievedAchievementInfo(ISteamUserStats, iIteratorPrevious, pchName, unNameBufLen, &pflPercent, &pbAchieved);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchName);
	jsal_put_prop_string(-2, "pchName");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	free(pchName);

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryInt64(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	int64_t * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_093 ISteamUserStats_GetGlobalStatHistoryInt64;

	pchStatName = (char*)jsal_require_string(0);
	cubData = jsal_require_uint(1);

	if (!(pData = (int64_t *)calloc(cubData, sizeof(int64_t))))
		return false;

	ISteamUserStats_GetGlobalStatHistoryInt64 = (FuncPtr_093)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64");
	result = ISteamUserStats_GetGlobalStatHistoryInt64(ISteamUserStats, pchStatName, pData, cubData);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int pDataIndex;
	jsal_push_new_array();
	for (pDataIndex = 0; pDataIndex < (int)cubData; ++pDataIndex)
	{
		push_int64_t_to_str(pData[pDataIndex]);
		jsal_put_prop_index(-2, pDataIndex);
	}
	jsal_put_prop_string(-2, "pData");

	free(pData);

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryDouble(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	double * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_094 ISteamUserStats_GetGlobalStatHistoryDouble;

	pchStatName = (char*)jsal_require_string(0);
	cubData = jsal_require_uint(1);

	if (!(pData = (double *)calloc(cubData, sizeof(double))))
		return false;

	ISteamUserStats_GetGlobalStatHistoryDouble = (FuncPtr_094)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble");
	result = ISteamUserStats_GetGlobalStatHistoryDouble(ISteamUserStats, pchStatName, pData, cubData);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int pDataIndex;
	jsal_push_new_array();
	for (pDataIndex = 0; pDataIndex < (int)cubData; ++pDataIndex)
	{
		jsal_push_number(pData[pDataIndex]);
		jsal_put_prop_index(-2, pDataIndex);
	}
	jsal_put_prop_string(-2, "pData");

	free(pData);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementDisplayAttribute(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	const char * pchKey;
	const char * result;
	FuncPtr_076 ISteamUserStats_GetAchievementDisplayAttribute;

	pchName = (char*)jsal_require_string(0);
	pchKey = (char*)jsal_require_string(1);

	ISteamUserStats_GetAchievementDisplayAttribute = (FuncPtr_076)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute");
	result = ISteamUserStats_GetAchievementDisplayAttribute(ISteamUserStats, pchName, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementName(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t iAchievement;
	const char * result;
	FuncPtr_078 ISteamUserStats_GetAchievementName;

	iAchievement = jsal_require_uint(0);

	ISteamUserStats_GetAchievementName = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementName");
	result = ISteamUserStats_GetAchievementName(ISteamUserStats, iAchievement);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	const char * result;
	FuncPtr_026 ISteamUserStats_GetLeaderboardName;

	hSteamLeaderboard = require_str_to_uint64_t(0);

	ISteamUserStats_GetLeaderboardName = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardName");
	result = ISteamUserStats_GetLeaderboardName(ISteamUserStats, hSteamLeaderboard);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetNumAchievements(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUserStats_GetNumAchievements;

	ISteamUserStats_GetNumAchievements = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetNumAchievements");
	result = ISteamUserStats_GetNumAchievements(ISteamUserStats);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardSortMethod(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_025 ISteamUserStats_GetLeaderboardSortMethod;

	hSteamLeaderboard = require_str_to_uint64_t(0);

	ISteamUserStats_GetLeaderboardSortMethod = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardSortMethod");
	result = ISteamUserStats_GetLeaderboardSortMethod(ISteamUserStats, hSteamLeaderboard);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardDisplayType(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_025 ISteamUserStats_GetLeaderboardDisplayType;

	hSteamLeaderboard = require_str_to_uint64_t(0);

	ISteamUserStats_GetLeaderboardDisplayType = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardDisplayType");
	result = ISteamUserStats_GetLeaderboardDisplayType(ISteamUserStats, hSteamLeaderboard);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUserStats_RequestUserStats(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	uint64_t result;
	FuncPtr_046 ISteamUserStats_RequestUserStats;

	steamIDUser = require_str_to_uint64_t(0);

	ISteamUserStats_RequestUserStats = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_RequestUserStats");
	result = ISteamUserStats_RequestUserStats(ISteamUserStats, steamIDUser);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_FindOrCreateLeaderboard(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchLeaderboardName;
	uint32_t eLeaderboardSortMethod;
	uint32_t eLeaderboardDisplayType;
	uint64_t result;
	FuncPtr_083 ISteamUserStats_FindOrCreateLeaderboard;

	pchLeaderboardName = (char*)jsal_require_string(0);
	eLeaderboardSortMethod = jsal_require_uint(1);
	eLeaderboardDisplayType = jsal_require_uint(2);

	ISteamUserStats_FindOrCreateLeaderboard = (FuncPtr_083)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_FindOrCreateLeaderboard");
	result = ISteamUserStats_FindOrCreateLeaderboard(ISteamUserStats, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_FindLeaderboard(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchLeaderboardName;
	uint64_t result;
	FuncPtr_020 ISteamUserStats_FindLeaderboard;

	pchLeaderboardName = (char*)jsal_require_string(0);

	ISteamUserStats_FindLeaderboard = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_FindLeaderboard");
	result = ISteamUserStats_FindLeaderboard(ISteamUserStats, pchLeaderboardName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_DownloadLeaderboardEntries(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t eLeaderboardDataRequest;
	int32_t nRangeStart;
	int32_t nRangeEnd;
	uint64_t result;
	FuncPtr_084 ISteamUserStats_DownloadLeaderboardEntries;

	hSteamLeaderboard = require_str_to_uint64_t(0);
	eLeaderboardDataRequest = jsal_require_uint(1);
	nRangeStart = jsal_require_int(2);
	nRangeEnd = jsal_require_int(3);

	ISteamUserStats_DownloadLeaderboardEntries = (FuncPtr_084)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntries");
	result = ISteamUserStats_DownloadLeaderboardEntries(ISteamUserStats, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_DownloadLeaderboardEntriesForUsers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint64_t * prgUsers;
	uint64_t result;
	FuncPtr_085 ISteamUserStats_DownloadLeaderboardEntriesForUsers;

	hSteamLeaderboard = require_str_to_uint64_t(0);
	jsal_require_array(1);
	int cUsers = jsal_get_length(1);
	if (!(prgUsers = (uint64_t *)malloc(cUsers * sizeof(uint64_t))))
		return false;
	for (int i = 0; i < cUsers; ++i){
		jsal_get_prop_index(1, i);
		prgUsers[i] = require_str_to_uint64_t(-1);
		jsal_pop(1);
	}

	ISteamUserStats_DownloadLeaderboardEntriesForUsers = (FuncPtr_085)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers");
	result = ISteamUserStats_DownloadLeaderboardEntriesForUsers(ISteamUserStats, hSteamLeaderboard, prgUsers, cUsers);

	push_uint64_t_to_str(result);

	free(prgUsers);

	return true;
}

static bool
js_ISteamUserStats_UploadLeaderboardScore(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t eLeaderboardUploadScoreMethod;
	int32_t nScore;
	int32_t * pScoreDetails;
	uint64_t result;
	FuncPtr_087 ISteamUserStats_UploadLeaderboardScore;

	hSteamLeaderboard = require_str_to_uint64_t(0);
	eLeaderboardUploadScoreMethod = jsal_require_uint(1);
	nScore = jsal_require_int(2);
	jsal_require_array(3);
	int cScoreDetailsCount = jsal_get_length(3);
	if (!(pScoreDetails = (int32_t *)malloc(cScoreDetailsCount * sizeof(int32_t))))
		return false;
	for (int i = 0; i < cScoreDetailsCount; ++i){
		jsal_get_prop_index(3, i);
		pScoreDetails[i] = jsal_require_int(-1);
		jsal_pop(1);
	}

	ISteamUserStats_UploadLeaderboardScore = (FuncPtr_087)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_UploadLeaderboardScore");
	result = ISteamUserStats_UploadLeaderboardScore(ISteamUserStats, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);

	push_uint64_t_to_str(result);

	free(pScoreDetails);

	return true;
}

static bool
js_ISteamUserStats_AttachLeaderboardUGC(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint64_t hUGC;
	uint64_t result;
	FuncPtr_088 ISteamUserStats_AttachLeaderboardUGC;

	hSteamLeaderboard = require_str_to_uint64_t(0);
	hUGC = require_str_to_uint64_t(1);

	ISteamUserStats_AttachLeaderboardUGC = (FuncPtr_088)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_AttachLeaderboardUGC");
	result = ISteamUserStats_AttachLeaderboardUGC(ISteamUserStats, hSteamLeaderboard, hUGC);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_GetNumberOfCurrentPlayers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUserStats_GetNumberOfCurrentPlayers;

	ISteamUserStats_GetNumberOfCurrentPlayers = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers");
	result = ISteamUserStats_GetNumberOfCurrentPlayers(ISteamUserStats);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_RequestGlobalAchievementPercentages(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUserStats_RequestGlobalAchievementPercentages;

	ISteamUserStats_RequestGlobalAchievementPercentages = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages");
	result = ISteamUserStats_RequestGlobalAchievementPercentages(ISteamUserStats);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUserStats_RequestGlobalStats(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nHistoryDays;
	uint64_t result;
	FuncPtr_035 ISteamUserStats_RequestGlobalStats;

	nHistoryDays = jsal_require_int(0);

	ISteamUserStats_RequestGlobalStats = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_RequestGlobalStats");
	result = ISteamUserStats_RequestGlobalStats(ISteamUserStats, nHistoryDays);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribed(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsSubscribed;

	ISteamApps_BIsSubscribed = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribed");
	result = ISteamApps_BIsSubscribed(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsLowViolence(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsLowViolence;

	ISteamApps_BIsLowViolence = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsLowViolence");
	result = ISteamApps_BIsLowViolence(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsCybercafe(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsCybercafe;

	ISteamApps_BIsCybercafe = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsCybercafe");
	result = ISteamApps_BIsCybercafe(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsVACBanned(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsVACBanned;

	ISteamApps_BIsVACBanned = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsVACBanned");
	result = ISteamApps_BIsVACBanned(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribedApp(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_021 ISteamApps_BIsSubscribedApp;

	appID = jsal_require_uint(0);

	ISteamApps_BIsSubscribedApp = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedApp");
	result = ISteamApps_BIsSubscribedApp(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsDlcInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_021 ISteamApps_BIsDlcInstalled;

	appID = jsal_require_uint(0);

	ISteamApps_BIsDlcInstalled = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsDlcInstalled");
	result = ISteamApps_BIsDlcInstalled(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribedFromFreeWeekend(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsSubscribedFromFreeWeekend;

	ISteamApps_BIsSubscribedFromFreeWeekend = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend");
	result = ISteamApps_BIsSubscribedFromFreeWeekend(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BGetDLCDataByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iDLC;
	uint32_t pAppID;
	bool pbAvailable;
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_097 ISteamApps_BGetDLCDataByIndex;

	iDLC = jsal_require_int(0);
	cchNameBufferSize = jsal_require_int(1);

	if (!(pchName = (char *)calloc(cchNameBufferSize, sizeof(char))))
		return false;

	ISteamApps_BGetDLCDataByIndex = (FuncPtr_097)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BGetDLCDataByIndex");
	result = ISteamApps_BGetDLCDataByIndex(ISteamApps, iDLC, &pAppID, &pbAvailable, pchName, cchNameBufferSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pAppID);
	jsal_put_prop_string(-2, "pAppID");
	jsal_push_boolean(pbAvailable);
	jsal_put_prop_string(-2, "pbAvailable");
	jsal_push_string(pchName);
	jsal_put_prop_string(-2, "pchName");

	free(pchName);

	return true;
}

static bool
js_ISteamApps_GetCurrentBetaName(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_011 ISteamApps_GetCurrentBetaName;

	cchNameBufferSize = jsal_require_int(0);

	if (!(pchName = (char *)calloc(cchNameBufferSize, sizeof(char))))
		return false;

	ISteamApps_GetCurrentBetaName = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetCurrentBetaName");
	result = ISteamApps_GetCurrentBetaName(ISteamApps, pchName, cchNameBufferSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchName);
	jsal_put_prop_string(-2, "pchName");

	free(pchName);

	return true;
}

static bool
js_ISteamApps_MarkContentCorrupt(int num_args, bool is_ctor, intptr_t magic)
{
	bool bMissingFilesOnly;
	bool result;
	FuncPtr_051 ISteamApps_MarkContentCorrupt;

	bMissingFilesOnly = jsal_require_boolean(0);

	ISteamApps_MarkContentCorrupt = (FuncPtr_051)GETADDRESS(steam_api, "SteamAPI_ISteamApps_MarkContentCorrupt");
	result = ISteamApps_MarkContentCorrupt(ISteamApps, bMissingFilesOnly);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsAppInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_021 ISteamApps_BIsAppInstalled;

	appID = jsal_require_uint(0);

	ISteamApps_BIsAppInstalled = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsAppInstalled");
	result = ISteamApps_BIsAppInstalled(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_GetDlcDownloadProgress(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint64_t punBytesDownloaded;
	uint64_t punBytesTotal;
	bool result;
	FuncPtr_101 ISteamApps_GetDlcDownloadProgress;

	nAppID = jsal_require_uint(0);

	ISteamApps_GetDlcDownloadProgress = (FuncPtr_101)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetDlcDownloadProgress");
	result = ISteamApps_GetDlcDownloadProgress(ISteamApps, nAppID, &punBytesDownloaded, &punBytesTotal);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	push_uint64_t_to_str(punBytesDownloaded);
	jsal_put_prop_string(-2, "punBytesDownloaded");
	push_uint64_t_to_str(punBytesTotal);
	jsal_put_prop_string(-2, "punBytesTotal");

	return true;
}

static bool
js_ISteamApps_BIsSubscribedFromFamilySharing(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamApps_BIsSubscribedFromFamilySharing;

	ISteamApps_BIsSubscribedFromFamilySharing = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing");
	result = ISteamApps_BIsSubscribedFromFamilySharing(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsTimedTrial(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t punSecondsAllowed;
	uint32_t punSecondsPlayed;
	bool result;
	FuncPtr_103 ISteamApps_BIsTimedTrial;

	ISteamApps_BIsTimedTrial = (FuncPtr_103)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsTimedTrial");
	result = ISteamApps_BIsTimedTrial(ISteamApps, &punSecondsAllowed, &punSecondsPlayed);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(punSecondsAllowed);
	jsal_put_prop_string(-2, "punSecondsAllowed");
	jsal_push_uint(punSecondsPlayed);
	jsal_put_prop_string(-2, "punSecondsPlayed");

	return true;
}

static bool
js_ISteamApps_SetDlcContext(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	bool result;
	FuncPtr_021 ISteamApps_SetDlcContext;

	nAppID = jsal_require_uint(0);

	ISteamApps_SetDlcContext = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamApps_SetDlcContext");
	result = ISteamApps_SetDlcContext(ISteamApps, nAppID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_GetCurrentGameLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_022 ISteamApps_GetCurrentGameLanguage;

	ISteamApps_GetCurrentGameLanguage = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetCurrentGameLanguage");
	result = ISteamApps_GetCurrentGameLanguage(ISteamApps);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetAvailableGameLanguages(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_022 ISteamApps_GetAvailableGameLanguages;

	ISteamApps_GetAvailableGameLanguages = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAvailableGameLanguages");
	result = ISteamApps_GetAvailableGameLanguages(ISteamApps);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetLaunchQueryParam(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchKey;
	const char * result;
	FuncPtr_100 ISteamApps_GetLaunchQueryParam;

	pchKey = (char*)jsal_require_string(0);

	ISteamApps_GetLaunchQueryParam = (FuncPtr_100)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetLaunchQueryParam");
	result = ISteamApps_GetLaunchQueryParam(ISteamApps, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetEarliestPurchaseUnixTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint32_t result;
	FuncPtr_066 ISteamApps_GetEarliestPurchaseUnixTime;

	nAppID = jsal_require_uint(0);

	ISteamApps_GetEarliestPurchaseUnixTime = (FuncPtr_066)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime");
	result = ISteamApps_GetEarliestPurchaseUnixTime(ISteamApps, nAppID);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamApps_GetInstalledDepots(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	uint32_t * pvecDepots;
	uint32_t cMaxDepots;
	uint32_t result;
	FuncPtr_098 ISteamApps_GetInstalledDepots;

	appID = jsal_require_uint(0);
	cMaxDepots = jsal_require_uint(1);

	if (!(pvecDepots = (uint32_t *)calloc(cMaxDepots, sizeof(uint32_t))))
		return false;

	ISteamApps_GetInstalledDepots = (FuncPtr_098)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetInstalledDepots");
	result = ISteamApps_GetInstalledDepots(ISteamApps, appID, pvecDepots, cMaxDepots);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	int pvecDepotsIndex;
	jsal_push_new_array();
	for (pvecDepotsIndex = 0; pvecDepotsIndex < (int)cMaxDepots; ++pvecDepotsIndex)
	{
		jsal_push_uint(pvecDepots[pvecDepotsIndex]);
		jsal_put_prop_index(-2, pvecDepotsIndex);
	}
	jsal_put_prop_string(-2, "pvecDepots");

	free(pvecDepots);

	return true;
}

static bool
js_ISteamApps_GetAppInstallDir(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	char * pchFolder;
	uint32_t cchFolderBufferSize;
	uint32_t result;
	FuncPtr_099 ISteamApps_GetAppInstallDir;

	appID = jsal_require_uint(0);
	cchFolderBufferSize = jsal_require_uint(1);

	if (!(pchFolder = (char *)calloc(cchFolderBufferSize, sizeof(char))))
		return false;

	ISteamApps_GetAppInstallDir = (FuncPtr_099)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppInstallDir");
	result = ISteamApps_GetAppInstallDir(ISteamApps, appID, pchFolder, cchFolderBufferSize);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchFolder);
	jsal_put_prop_string(-2, "pchFolder");

	free(pchFolder);

	return true;
}

static bool
js_ISteamApps_GetDLCCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamApps_GetDLCCount;

	ISteamApps_GetDLCCount = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetDLCCount");
	result = ISteamApps_GetDLCCount(ISteamApps);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamApps_GetAppBuildId(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_007 ISteamApps_GetAppBuildId;

	ISteamApps_GetAppBuildId = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppBuildId");
	result = ISteamApps_GetAppBuildId(ISteamApps);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamApps_GetLaunchCommandLine(int num_args, bool is_ctor, intptr_t magic)
{
	char * pszCommandLine;
	int32_t cubCommandLine;
	int32_t result;
	FuncPtr_102 ISteamApps_GetLaunchCommandLine;

	cubCommandLine = jsal_require_int(0);

	if (!(pszCommandLine = (char *)calloc(cubCommandLine, sizeof(char))))
		return false;

	ISteamApps_GetLaunchCommandLine = (FuncPtr_102)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetLaunchCommandLine");
	result = ISteamApps_GetLaunchCommandLine(ISteamApps, pszCommandLine, cubCommandLine);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pszCommandLine);
	jsal_put_prop_string(-2, "pszCommandLine");

	free(pszCommandLine);

	return true;
}

static bool
js_ISteamApps_InstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_016 ISteamApps_InstallDLC;

	nAppID = jsal_require_uint(0);

	ISteamApps_InstallDLC = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamApps_InstallDLC");
	ISteamApps_InstallDLC(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_UninstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_016 ISteamApps_UninstallDLC;

	nAppID = jsal_require_uint(0);

	ISteamApps_UninstallDLC = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamApps_UninstallDLC");
	ISteamApps_UninstallDLC(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_RequestAppProofOfPurchaseKey(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_016 ISteamApps_RequestAppProofOfPurchaseKey;

	nAppID = jsal_require_uint(0);

	ISteamApps_RequestAppProofOfPurchaseKey = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey");
	ISteamApps_RequestAppProofOfPurchaseKey(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_RequestAllProofOfPurchaseKeys(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamApps_RequestAllProofOfPurchaseKeys;

	ISteamApps_RequestAllProofOfPurchaseKeys = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys");
	ISteamApps_RequestAllProofOfPurchaseKeys(ISteamApps);

	return false;
}

static bool
js_ISteamApps_GetAppOwner(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamApps_GetAppOwner;

	ISteamApps_GetAppOwner = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppOwner");
	result = ISteamApps_GetAppOwner(ISteamApps);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamApps_GetFileDetails(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszFileName;
	uint64_t result;
	FuncPtr_020 ISteamApps_GetFileDetails;

	pszFileName = (char*)jsal_require_string(0);

	ISteamApps_GetFileDetails = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetFileDetails");
	result = ISteamApps_GetFileDetails(ISteamApps, pszFileName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_Init(int num_args, bool is_ctor, intptr_t magic)
{
	bool bExplicitlyCallRunFrame;
	bool result;
	FuncPtr_051 ISteamInput_Init;

	bExplicitlyCallRunFrame = jsal_require_boolean(0);

	ISteamInput_Init = (FuncPtr_051)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Init");
	result = ISteamInput_Init(ISteamInput, bExplicitlyCallRunFrame);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamInput_Shutdown;

	ISteamInput_Shutdown = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Shutdown");
	result = ISteamInput_Shutdown(ISteamInput);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_SetInputActionManifestFilePath(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchInputActionManifestAbsolutePath;
	bool result;
	FuncPtr_053 ISteamInput_SetInputActionManifestFilePath;

	pchInputActionManifestAbsolutePath = (char*)jsal_require_string(0);

	ISteamInput_SetInputActionManifestFilePath = (FuncPtr_053)GETADDRESS(steam_api, "SteamAPI_ISteamInput_SetInputActionManifestFilePath");
	result = ISteamInput_SetInputActionManifestFilePath(ISteamInput, pchInputActionManifestAbsolutePath);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_BWaitForData(int num_args, bool is_ctor, intptr_t magic)
{
	bool bWaitForever;
	uint32_t unTimeout;
	bool result;
	FuncPtr_104 ISteamInput_BWaitForData;

	bWaitForever = jsal_require_boolean(0);
	unTimeout = jsal_require_uint(1);

	ISteamInput_BWaitForData = (FuncPtr_104)GETADDRESS(steam_api, "SteamAPI_ISteamInput_BWaitForData");
	result = ISteamInput_BWaitForData(ISteamInput, bWaitForever, unTimeout);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_BNewDataAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamInput_BNewDataAvailable;

	ISteamInput_BNewDataAvailable = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamInput_BNewDataAvailable");
	result = ISteamInput_BNewDataAvailable(ISteamInput);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_ShowBindingPanel(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	bool result;
	FuncPtr_050 ISteamInput_ShowBindingPanel;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_ShowBindingPanel = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ShowBindingPanel");
	result = ISteamInput_ShowBindingPanel(ISteamInput, inputHandle);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_GetDeviceBindingRevision(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	int32_t pMajor;
	int32_t pMinor;
	bool result;
	FuncPtr_120 ISteamInput_GetDeviceBindingRevision;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetDeviceBindingRevision = (FuncPtr_120)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDeviceBindingRevision");
	result = ISteamInput_GetDeviceBindingRevision(ISteamInput, inputHandle, &pMajor, &pMinor);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pMajor);
	jsal_put_prop_string(-2, "pMajor");
	jsal_push_int(pMinor);
	jsal_put_prop_string(-2, "pMinor");

	return true;
}

static bool
js_ISteamInput_RunFrame(int num_args, bool is_ctor, intptr_t magic)
{
	bool bReservedValue;
	FuncPtr_064 ISteamInput_RunFrame;

	bReservedValue = jsal_require_boolean(0);

	ISteamInput_RunFrame = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamInput_RunFrame");
	ISteamInput_RunFrame(ISteamInput, bReservedValue);

	return false;
}

static bool
js_ISteamInput_EnableDeviceCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_012 ISteamInput_EnableDeviceCallbacks;

	ISteamInput_EnableDeviceCallbacks = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamInput_EnableDeviceCallbacks");
	ISteamInput_EnableDeviceCallbacks(ISteamInput);

	return false;
}

static bool
js_ISteamInput_ActivateActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	FuncPtr_106 ISteamInput_ActivateActionSet;

	inputHandle = require_str_to_uint64_t(0);
	actionSetHandle = require_str_to_uint64_t(1);

	ISteamInput_ActivateActionSet = (FuncPtr_106)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ActivateActionSet");
	ISteamInput_ActivateActionSet(ISteamInput, inputHandle, actionSetHandle);

	return false;
}

static bool
js_ISteamInput_ActivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_106 ISteamInput_ActivateActionSetLayer;

	inputHandle = require_str_to_uint64_t(0);
	actionSetLayerHandle = require_str_to_uint64_t(1);

	ISteamInput_ActivateActionSetLayer = (FuncPtr_106)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ActivateActionSetLayer");
	ISteamInput_ActivateActionSetLayer(ISteamInput, inputHandle, actionSetLayerHandle);

	return false;
}

static bool
js_ISteamInput_DeactivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_106 ISteamInput_DeactivateActionSetLayer;

	inputHandle = require_str_to_uint64_t(0);
	actionSetLayerHandle = require_str_to_uint64_t(1);

	ISteamInput_DeactivateActionSetLayer = (FuncPtr_106)GETADDRESS(steam_api, "SteamAPI_ISteamInput_DeactivateActionSetLayer");
	ISteamInput_DeactivateActionSetLayer(ISteamInput, inputHandle, actionSetLayerHandle);

	return false;
}

static bool
js_ISteamInput_DeactivateAllActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	FuncPtr_015 ISteamInput_DeactivateAllActionSetLayers;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_DeactivateAllActionSetLayers = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamInput_DeactivateAllActionSetLayers");
	ISteamInput_DeactivateAllActionSetLayers(ISteamInput, inputHandle);

	return false;
}

static bool
js_ISteamInput_StopAnalogActionMomentum(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t eAction;
	FuncPtr_106 ISteamInput_StopAnalogActionMomentum;

	inputHandle = require_str_to_uint64_t(0);
	eAction = require_str_to_uint64_t(1);

	ISteamInput_StopAnalogActionMomentum = (FuncPtr_106)GETADDRESS(steam_api, "SteamAPI_ISteamInput_StopAnalogActionMomentum");
	ISteamInput_StopAnalogActionMomentum(ISteamInput, inputHandle, eAction);

	return false;
}

static bool
js_ISteamInput_TriggerVibration(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	FuncPtr_114 ISteamInput_TriggerVibration;

	inputHandle = require_str_to_uint64_t(0);
	usLeftSpeed = jsal_require_uint(1);
	usRightSpeed = jsal_require_uint(2);

	ISteamInput_TriggerVibration = (FuncPtr_114)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerVibration");
	ISteamInput_TriggerVibration(ISteamInput, inputHandle, usLeftSpeed, usRightSpeed);

	return false;
}

static bool
js_ISteamInput_TriggerVibrationExtended(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	uint16_t usLeftTriggerSpeed;
	uint16_t usRightTriggerSpeed;
	FuncPtr_115 ISteamInput_TriggerVibrationExtended;

	inputHandle = require_str_to_uint64_t(0);
	usLeftSpeed = jsal_require_uint(1);
	usRightSpeed = jsal_require_uint(2);
	usLeftTriggerSpeed = jsal_require_uint(3);
	usRightTriggerSpeed = jsal_require_uint(4);

	ISteamInput_TriggerVibrationExtended = (FuncPtr_115)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerVibrationExtended");
	ISteamInput_TriggerVibrationExtended(ISteamInput, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);

	return false;
}

static bool
js_ISteamInput_TriggerSimpleHapticEvent(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eHapticLocation;
	uint8_t nIntensity;
	char nGainDB;
	uint8_t nOtherIntensity;
	char nOtherGainDB;
	FuncPtr_116 ISteamInput_TriggerSimpleHapticEvent;

	inputHandle = require_str_to_uint64_t(0);
	eHapticLocation = jsal_require_uint(1);
	nIntensity = jsal_require_uint(2);
	nGainDB = jsal_require_int(3);
	nOtherIntensity = jsal_require_uint(4);
	nOtherGainDB = jsal_require_int(5);

	ISteamInput_TriggerSimpleHapticEvent = (FuncPtr_116)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerSimpleHapticEvent");
	ISteamInput_TriggerSimpleHapticEvent(ISteamInput, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);

	return false;
}

static bool
js_ISteamInput_SetLEDColor(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint8_t nColorR;
	uint8_t nColorG;
	uint8_t nColorB;
	uint32_t nFlags;
	FuncPtr_117 ISteamInput_SetLEDColor;

	inputHandle = require_str_to_uint64_t(0);
	nColorR = jsal_require_uint(1);
	nColorG = jsal_require_uint(2);
	nColorB = jsal_require_uint(3);
	nFlags = jsal_require_uint(4);

	ISteamInput_SetLEDColor = (FuncPtr_117)GETADDRESS(steam_api, "SteamAPI_ISteamInput_SetLEDColor");
	ISteamInput_SetLEDColor(ISteamInput, inputHandle, nColorR, nColorG, nColorB, nFlags);

	return false;
}

static bool
js_ISteamInput_Legacy_TriggerHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	FuncPtr_018 ISteamInput_Legacy_TriggerHapticPulse;

	inputHandle = require_str_to_uint64_t(0);
	eTargetPad = jsal_require_uint(1);
	usDurationMicroSec = jsal_require_uint(2);

	ISteamInput_Legacy_TriggerHapticPulse = (FuncPtr_018)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerHapticPulse");
	ISteamInput_Legacy_TriggerHapticPulse(ISteamInput, inputHandle, eTargetPad, usDurationMicroSec);

	return false;
}

static bool
js_ISteamInput_Legacy_TriggerRepeatedHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	uint16_t usOffMicroSec;
	uint16_t unRepeat;
	uint32_t nFlags;
	FuncPtr_118 ISteamInput_Legacy_TriggerRepeatedHapticPulse;

	inputHandle = require_str_to_uint64_t(0);
	eTargetPad = jsal_require_uint(1);
	usDurationMicroSec = jsal_require_uint(2);
	usOffMicroSec = jsal_require_uint(3);
	unRepeat = jsal_require_uint(4);
	nFlags = jsal_require_uint(5);

	ISteamInput_Legacy_TriggerRepeatedHapticPulse = (FuncPtr_118)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse");
	ISteamInput_Legacy_TriggerRepeatedHapticPulse(ISteamInput, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);

	return false;
}

static bool
js_ISteamInput_GetConnectedControllers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_105 ISteamInput_GetConnectedControllers;

	if (!(handlesOut = (uint64_t *)calloc(16, sizeof(uint64_t))))
		return false;

	ISteamInput_GetConnectedControllers = (FuncPtr_105)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetConnectedControllers");
	result = ISteamInput_GetConnectedControllers(ISteamInput, handlesOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int handlesOutIndex;
	jsal_push_new_array();
	for (handlesOutIndex = 0; handlesOutIndex < (int)16; ++handlesOutIndex)
	{
		push_uint64_t_to_str(handlesOut[handlesOutIndex]);
		jsal_put_prop_index(-2, handlesOutIndex);
	}
	jsal_put_prop_string(-2, "handlesOut");

	free(handlesOut);

	return true;
}

static bool
js_ISteamInput_GetActiveActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_107 ISteamInput_GetActiveActionSetLayers;

	inputHandle = require_str_to_uint64_t(0);

	if (!(handlesOut = (uint64_t *)calloc(16, sizeof(uint64_t))))
		return false;

	ISteamInput_GetActiveActionSetLayers = (FuncPtr_107)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActiveActionSetLayers");
	result = ISteamInput_GetActiveActionSetLayers(ISteamInput, inputHandle, handlesOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int handlesOutIndex;
	jsal_push_new_array();
	for (handlesOutIndex = 0; handlesOutIndex < (int)16; ++handlesOutIndex)
	{
		push_uint64_t_to_str(handlesOut[handlesOutIndex]);
		jsal_put_prop_index(-2, handlesOutIndex);
	}
	jsal_put_prop_string(-2, "handlesOut");

	free(handlesOut);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t digitalActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_109 ISteamInput_GetDigitalActionOrigins;

	inputHandle = require_str_to_uint64_t(0);
	actionSetHandle = require_str_to_uint64_t(1);
	digitalActionHandle = require_str_to_uint64_t(2);

	if (!(originsOut = (uint32_t *)calloc(8, sizeof(uint32_t))))
		return false;

	ISteamInput_GetDigitalActionOrigins = (FuncPtr_109)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionOrigins");
	result = ISteamInput_GetDigitalActionOrigins(ISteamInput, inputHandle, actionSetHandle, digitalActionHandle, originsOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int originsOutIndex;
	jsal_push_new_array();
	for (originsOutIndex = 0; originsOutIndex < (int)8; ++originsOutIndex)
	{
		jsal_push_uint(originsOut[originsOutIndex]);
		jsal_put_prop_index(-2, originsOutIndex);
	}
	jsal_put_prop_string(-2, "originsOut");

	free(originsOut);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t analogActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_109 ISteamInput_GetAnalogActionOrigins;

	inputHandle = require_str_to_uint64_t(0);
	actionSetHandle = require_str_to_uint64_t(1);
	analogActionHandle = require_str_to_uint64_t(2);

	if (!(originsOut = (uint32_t *)calloc(8, sizeof(uint32_t))))
		return false;

	ISteamInput_GetAnalogActionOrigins = (FuncPtr_109)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionOrigins");
	result = ISteamInput_GetAnalogActionOrigins(ISteamInput, inputHandle, actionSetHandle, analogActionHandle, originsOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int originsOutIndex;
	jsal_push_new_array();
	for (originsOutIndex = 0; originsOutIndex < (int)8; ++originsOutIndex)
	{
		jsal_push_uint(originsOut[originsOutIndex]);
		jsal_put_prop_index(-2, originsOutIndex);
	}
	jsal_put_prop_string(-2, "originsOut");

	free(originsOut);

	return true;
}

static bool
js_ISteamInput_GetGamepadIndexForController(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t ulinputHandle;
	int32_t result;
	FuncPtr_029 ISteamInput_GetGamepadIndexForController;

	ulinputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetGamepadIndexForController = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGamepadIndexForController");
	result = ISteamInput_GetGamepadIndexForController(ISteamInput, ulinputHandle);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamInput_GetActionSetHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionSetName;
	uint64_t result;
	FuncPtr_020 ISteamInput_GetActionSetHandle;

	pszActionSetName = (char*)jsal_require_string(0);

	ISteamInput_GetActionSetHandle = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActionSetHandle");
	result = ISteamInput_GetActionSetHandle(ISteamInput, pszActionSetName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_GetCurrentActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t result;
	FuncPtr_046 ISteamInput_GetCurrentActionSet;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetCurrentActionSet = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetCurrentActionSet");
	result = ISteamInput_GetCurrentActionSet(ISteamInput, inputHandle);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionName;
	uint64_t result;
	FuncPtr_020 ISteamInput_GetDigitalActionHandle;

	pszActionName = (char*)jsal_require_string(0);

	ISteamInput_GetDigitalActionHandle = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionHandle");
	result = ISteamInput_GetDigitalActionHandle(ISteamInput, pszActionName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionName;
	uint64_t result;
	FuncPtr_020 ISteamInput_GetAnalogActionHandle;

	pszActionName = (char*)jsal_require_string(0);

	ISteamInput_GetAnalogActionHandle = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionHandle");
	result = ISteamInput_GetAnalogActionHandle(ISteamInput, pszActionName);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_GetControllerForGamepadIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nIndex;
	uint64_t result;
	FuncPtr_035 ISteamInput_GetControllerForGamepadIndex;

	nIndex = jsal_require_int(0);

	ISteamInput_GetControllerForGamepadIndex = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
	result = ISteamInput_GetControllerForGamepadIndex(ISteamInput, nIndex);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t digitalActionHandle;
	InputDigitalActionData_t result;
	FuncPtr_108 ISteamInput_GetDigitalActionData;

	inputHandle = require_str_to_uint64_t(0);
	digitalActionHandle = require_str_to_uint64_t(1);

	ISteamInput_GetDigitalActionData = (FuncPtr_108)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionData");
	result = ISteamInput_GetDigitalActionData(ISteamInput, inputHandle, digitalActionHandle);

	jsal_push_new_object();
	jsal_push_boolean(result.bState);
	jsal_put_prop_string(-2, "bState");
	jsal_push_boolean(result.bActive);
	jsal_put_prop_string(-2, "bActive");

	return true;
}

static bool
js_ISteamInput_GetStringForDigitalActionName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_026 ISteamInput_GetStringForDigitalActionName;

	eActionHandle = require_str_to_uint64_t(0);

	ISteamInput_GetStringForDigitalActionName = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForDigitalActionName");
	result = ISteamInput_GetStringForDigitalActionName(ISteamInput, eActionHandle);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphPNGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	uint32_t eSize;
	uint32_t unFlags;
	const char * result;
	FuncPtr_111 ISteamInput_GetGlyphPNGForActionOrigin;

	eOrigin = jsal_require_uint(0);
	eSize = jsal_require_uint(1);
	unFlags = jsal_require_uint(2);

	ISteamInput_GetGlyphPNGForActionOrigin = (FuncPtr_111)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin");
	result = ISteamInput_GetGlyphPNGForActionOrigin(ISteamInput, eOrigin, eSize, unFlags);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphSVGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	uint32_t unFlags;
	const char * result;
	FuncPtr_112 ISteamInput_GetGlyphSVGForActionOrigin;

	eOrigin = jsal_require_uint(0);
	unFlags = jsal_require_uint(1);

	ISteamInput_GetGlyphSVGForActionOrigin = (FuncPtr_112)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin");
	result = ISteamInput_GetGlyphSVGForActionOrigin(ISteamInput, eOrigin, unFlags);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphForActionOrigin_Legacy(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_078 ISteamInput_GetGlyphForActionOrigin_Legacy;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetGlyphForActionOrigin_Legacy = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy");
	result = ISteamInput_GetGlyphForActionOrigin_Legacy(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_078 ISteamInput_GetStringForActionOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetStringForActionOrigin = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForActionOrigin");
	result = ISteamInput_GetStringForActionOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForAnalogActionName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_026 ISteamInput_GetStringForAnalogActionName;

	eActionHandle = require_str_to_uint64_t(0);

	ISteamInput_GetStringForAnalogActionName = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForAnalogActionName");
	result = ISteamInput_GetStringForAnalogActionName(ISteamInput, eActionHandle);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_078 ISteamInput_GetStringForXboxOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetStringForXboxOrigin = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForXboxOrigin");
	result = ISteamInput_GetStringForXboxOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_078 ISteamInput_GetGlyphForXboxOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetGlyphForXboxOrigin = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphForXboxOrigin");
	result = ISteamInput_GetGlyphForXboxOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t analogActionHandle;
	InputAnalogActionData_t result;
	FuncPtr_110 ISteamInput_GetAnalogActionData;

	inputHandle = require_str_to_uint64_t(0);
	analogActionHandle = require_str_to_uint64_t(1);

	ISteamInput_GetAnalogActionData = (FuncPtr_110)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionData");
	result = ISteamInput_GetAnalogActionData(ISteamInput, inputHandle, analogActionHandle);

	jsal_push_new_object();
	jsal_push_uint(result.eMode);
	jsal_put_prop_string(-2, "eMode");
	jsal_push_number(result.x);
	jsal_put_prop_string(-2, "x");
	jsal_push_number(result.y);
	jsal_put_prop_string(-2, "y");
	jsal_push_boolean(result.bActive);
	jsal_put_prop_string(-2, "bActive");

	return true;
}

static bool
js_ISteamInput_GetMotionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	InputMotionData_t result;
	FuncPtr_113 ISteamInput_GetMotionData;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetMotionData = (FuncPtr_113)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetMotionData");
	result = ISteamInput_GetMotionData(ISteamInput, inputHandle);

	jsal_push_new_object();
	jsal_push_number(result.rotQuatX);
	jsal_put_prop_string(-2, "rotQuatX");
	jsal_push_number(result.rotQuatY);
	jsal_put_prop_string(-2, "rotQuatY");
	jsal_push_number(result.rotQuatZ);
	jsal_put_prop_string(-2, "rotQuatZ");
	jsal_push_number(result.rotQuatW);
	jsal_put_prop_string(-2, "rotQuatW");
	jsal_push_number(result.posAccelX);
	jsal_put_prop_string(-2, "posAccelX");
	jsal_push_number(result.posAccelY);
	jsal_put_prop_string(-2, "posAccelY");
	jsal_push_number(result.posAccelZ);
	jsal_put_prop_string(-2, "posAccelZ");
	jsal_push_number(result.rotVelX);
	jsal_put_prop_string(-2, "rotVelX");
	jsal_push_number(result.rotVelY);
	jsal_put_prop_string(-2, "rotVelY");
	jsal_push_number(result.rotVelZ);
	jsal_put_prop_string(-2, "rotVelZ");

	return true;
}

static bool
js_ISteamInput_GetInputTypeForHandle(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_025 ISteamInput_GetInputTypeForHandle;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetInputTypeForHandle = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetInputTypeForHandle");
	result = ISteamInput_GetInputTypeForHandle(ISteamInput, inputHandle);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetActionOriginFromXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eOrigin;
	uint32_t result;
	FuncPtr_017 ISteamInput_GetActionOriginFromXboxOrigin;

	inputHandle = require_str_to_uint64_t(0);
	eOrigin = jsal_require_uint(1);

	ISteamInput_GetActionOriginFromXboxOrigin = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin");
	result = ISteamInput_GetActionOriginFromXboxOrigin(ISteamInput, inputHandle, eOrigin);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_TranslateActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eDestinationInputType;
	uint32_t eSourceOrigin;
	uint32_t result;
	FuncPtr_119 ISteamInput_TranslateActionOrigin;

	eDestinationInputType = jsal_require_uint(0);
	eSourceOrigin = jsal_require_uint(1);

	ISteamInput_TranslateActionOrigin = (FuncPtr_119)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TranslateActionOrigin");
	result = ISteamInput_TranslateActionOrigin(ISteamInput, eDestinationInputType, eSourceOrigin);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetRemotePlaySessionID(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_025 ISteamInput_GetRemotePlaySessionID;

	inputHandle = require_str_to_uint64_t(0);

	ISteamInput_GetRemotePlaySessionID = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetRemotePlaySessionID");
	result = ISteamInput_GetRemotePlaySessionID(ISteamInput, inputHandle);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetSessionInputConfigurationSettings(int num_args, bool is_ctor, intptr_t magic)
{
	uint16_t result;
	FuncPtr_121 ISteamInput_GetSessionInputConfigurationSettings;

	ISteamInput_GetSessionInputConfigurationSettings = (FuncPtr_121)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetSessionInputConfigurationSettings");
	result = ISteamInput_GetSessionInputConfigurationSettings(ISteamInput);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_CreateQueryUserUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t unAccountID;
	uint32_t eListType;
	uint32_t eMatchingUGCType;
	uint32_t eSortOrder;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	uint32_t unPage;
	uint64_t result;
	FuncPtr_122 ISteamUGC_CreateQueryUserUGCRequest;

	unAccountID = jsal_require_uint(0);
	eListType = jsal_require_uint(1);
	eMatchingUGCType = jsal_require_uint(2);
	eSortOrder = jsal_require_uint(3);
	nCreatorAppID = jsal_require_uint(4);
	nConsumerAppID = jsal_require_uint(5);
	unPage = jsal_require_uint(6);

	ISteamUGC_CreateQueryUserUGCRequest = (FuncPtr_122)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_CreateQueryUserUGCRequest");
	result = ISteamUGC_CreateQueryUserUGCRequest(ISteamUGC, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_CreateQueryAllUGCRequestPage(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eQueryType;
	uint32_t eMatchingeMatchingUGCTypeFileType;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	uint32_t unPage;
	uint64_t result;
	FuncPtr_123 ISteamUGC_CreateQueryAllUGCRequestPage;

	eQueryType = jsal_require_uint(0);
	eMatchingeMatchingUGCTypeFileType = jsal_require_uint(1);
	nCreatorAppID = jsal_require_uint(2);
	nConsumerAppID = jsal_require_uint(3);
	unPage = jsal_require_uint(4);

	ISteamUGC_CreateQueryAllUGCRequestPage = (FuncPtr_123)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage");
	result = ISteamUGC_CreateQueryAllUGCRequestPage(ISteamUGC, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_CreateQueryAllUGCRequestCursor(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eQueryType;
	uint32_t eMatchingeMatchingUGCTypeFileType;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	const char * pchCursor;
	uint64_t result;
	FuncPtr_124 ISteamUGC_CreateQueryAllUGCRequestCursor;

	eQueryType = jsal_require_uint(0);
	eMatchingeMatchingUGCTypeFileType = jsal_require_uint(1);
	nCreatorAppID = jsal_require_uint(2);
	nConsumerAppID = jsal_require_uint(3);
	pchCursor = (char*)jsal_require_string(4);

	ISteamUGC_CreateQueryAllUGCRequestCursor = (FuncPtr_124)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor");
	result = ISteamUGC_CreateQueryAllUGCRequestCursor(ISteamUGC, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_CreateQueryUGCDetailsRequest(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * pvecPublishedFileID;
	uint32_t unNumPublishedFileIDs;
	uint64_t result;
	FuncPtr_125 ISteamUGC_CreateQueryUGCDetailsRequest;

	unNumPublishedFileIDs = jsal_require_uint(0);

	if (!(pvecPublishedFileID = (uint64_t *)calloc(unNumPublishedFileIDs, sizeof(uint64_t))))
		return false;

	ISteamUGC_CreateQueryUGCDetailsRequest = (FuncPtr_125)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest");
	result = ISteamUGC_CreateQueryUGCDetailsRequest(ISteamUGC, pvecPublishedFileID, unNumPublishedFileIDs);

	jsal_push_new_object();
	push_uint64_t_to_str(result);
	jsal_put_prop_string(-2, "result");
	int pvecPublishedFileIDIndex;
	jsal_push_new_array();
	for (pvecPublishedFileIDIndex = 0; pvecPublishedFileIDIndex < (int)unNumPublishedFileIDs; ++pvecPublishedFileIDIndex)
	{
		push_uint64_t_to_str(pvecPublishedFileID[pvecPublishedFileIDIndex]);
		jsal_put_prop_index(-2, pvecPublishedFileIDIndex);
	}
	jsal_put_prop_string(-2, "pvecPublishedFileID");

	free(pvecPublishedFileID);

	return true;
}

static bool
js_ISteamUGC_SendQueryUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint64_t result;
	FuncPtr_046 ISteamUGC_SendQueryUGCRequest;

	handle = require_str_to_uint64_t(0);

	ISteamUGC_SendQueryUGCRequest = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SendQueryUGCRequest");
	result = ISteamUGC_SendQueryUGCRequest(ISteamUGC, handle);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_CreateItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nConsumerAppId;
	uint32_t eFileType;
	uint64_t result;
	FuncPtr_138 ISteamUGC_CreateItem;

	nConsumerAppId = jsal_require_uint(0);
	eFileType = jsal_require_uint(1);

	ISteamUGC_CreateItem = (FuncPtr_138)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_CreateItem");
	result = ISteamUGC_CreateItem(ISteamUGC, nConsumerAppId, eFileType);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_StartItemUpdate(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nConsumerAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_139 ISteamUGC_StartItemUpdate;

	nConsumerAppId = jsal_require_uint(0);
	nPublishedFileID = require_str_to_uint64_t(1);

	ISteamUGC_StartItemUpdate = (FuncPtr_139)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_StartItemUpdate");
	result = ISteamUGC_StartItemUpdate(ISteamUGC, nConsumerAppId, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_SubmitItemUpdate(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchChangeNote;
	uint64_t result;
	FuncPtr_143 ISteamUGC_SubmitItemUpdate;

	handle = require_str_to_uint64_t(0);
	pchChangeNote = (char*)jsal_require_string(1);

	ISteamUGC_SubmitItemUpdate = (FuncPtr_143)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SubmitItemUpdate");
	result = ISteamUGC_SubmitItemUpdate(ISteamUGC, handle, pchChangeNote);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_SetUserItemVote(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	bool bVoteUp;
	uint64_t result;
	FuncPtr_145 ISteamUGC_SetUserItemVote;

	nPublishedFileID = require_str_to_uint64_t(0);
	bVoteUp = jsal_require_boolean(1);

	ISteamUGC_SetUserItemVote = (FuncPtr_145)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetUserItemVote");
	result = ISteamUGC_SetUserItemVote(ISteamUGC, nPublishedFileID, bVoteUp);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_GetUserItemVote(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_046 ISteamUGC_GetUserItemVote;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_GetUserItemVote = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetUserItemVote");
	result = ISteamUGC_GetUserItemVote(ISteamUGC, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_AddItemToFavorites(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_139 ISteamUGC_AddItemToFavorites;

	nAppId = jsal_require_uint(0);
	nPublishedFileID = require_str_to_uint64_t(1);

	ISteamUGC_AddItemToFavorites = (FuncPtr_139)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddItemToFavorites");
	result = ISteamUGC_AddItemToFavorites(ISteamUGC, nAppId, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_RemoveItemFromFavorites(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_139 ISteamUGC_RemoveItemFromFavorites;

	nAppId = jsal_require_uint(0);
	nPublishedFileID = require_str_to_uint64_t(1);

	ISteamUGC_RemoveItemFromFavorites = (FuncPtr_139)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveItemFromFavorites");
	result = ISteamUGC_RemoveItemFromFavorites(ISteamUGC, nAppId, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_SubscribeItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_046 ISteamUGC_SubscribeItem;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_SubscribeItem = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SubscribeItem");
	result = ISteamUGC_SubscribeItem(ISteamUGC, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_UnsubscribeItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_046 ISteamUGC_UnsubscribeItem;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_UnsubscribeItem = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_UnsubscribeItem");
	result = ISteamUGC_UnsubscribeItem(ISteamUGC, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_StartPlaytimeTracking(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * pvecPublishedFileID;
	uint64_t result;
	FuncPtr_125 ISteamUGC_StartPlaytimeTracking;

	jsal_require_array(0);
	int unNumPublishedFileIDs = jsal_get_length(0);
	if (!(pvecPublishedFileID = (uint64_t *)malloc(unNumPublishedFileIDs * sizeof(uint64_t))))
		return false;
	for (int i = 0; i < unNumPublishedFileIDs; ++i){
		jsal_get_prop_index(0, i);
		pvecPublishedFileID[i] = require_str_to_uint64_t(-1);
		jsal_pop(1);
	}

	ISteamUGC_StartPlaytimeTracking = (FuncPtr_125)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_StartPlaytimeTracking");
	result = ISteamUGC_StartPlaytimeTracking(ISteamUGC, pvecPublishedFileID, unNumPublishedFileIDs);

	push_uint64_t_to_str(result);

	free(pvecPublishedFileID);

	return true;
}

static bool
js_ISteamUGC_StopPlaytimeTracking(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * pvecPublishedFileID;
	uint64_t result;
	FuncPtr_125 ISteamUGC_StopPlaytimeTracking;

	jsal_require_array(0);
	int unNumPublishedFileIDs = jsal_get_length(0);
	if (!(pvecPublishedFileID = (uint64_t *)malloc(unNumPublishedFileIDs * sizeof(uint64_t))))
		return false;
	for (int i = 0; i < unNumPublishedFileIDs; ++i){
		jsal_get_prop_index(0, i);
		pvecPublishedFileID[i] = require_str_to_uint64_t(-1);
		jsal_pop(1);
	}

	ISteamUGC_StopPlaytimeTracking = (FuncPtr_125)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_StopPlaytimeTracking");
	result = ISteamUGC_StopPlaytimeTracking(ISteamUGC, pvecPublishedFileID, unNumPublishedFileIDs);

	push_uint64_t_to_str(result);

	free(pvecPublishedFileID);

	return true;
}

static bool
js_ISteamUGC_StopPlaytimeTrackingForAllItems(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUGC_StopPlaytimeTrackingForAllItems;

	ISteamUGC_StopPlaytimeTrackingForAllItems = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems");
	result = ISteamUGC_StopPlaytimeTrackingForAllItems(ISteamUGC);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_AddDependency(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nParentPublishedFileID;
	uint64_t nChildPublishedFileID;
	uint64_t result;
	FuncPtr_088 ISteamUGC_AddDependency;

	nParentPublishedFileID = require_str_to_uint64_t(0);
	nChildPublishedFileID = require_str_to_uint64_t(1);

	ISteamUGC_AddDependency = (FuncPtr_088)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddDependency");
	result = ISteamUGC_AddDependency(ISteamUGC, nParentPublishedFileID, nChildPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_RemoveDependency(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nParentPublishedFileID;
	uint64_t nChildPublishedFileID;
	uint64_t result;
	FuncPtr_088 ISteamUGC_RemoveDependency;

	nParentPublishedFileID = require_str_to_uint64_t(0);
	nChildPublishedFileID = require_str_to_uint64_t(1);

	ISteamUGC_RemoveDependency = (FuncPtr_088)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveDependency");
	result = ISteamUGC_RemoveDependency(ISteamUGC, nParentPublishedFileID, nChildPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_AddAppDependency(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint32_t nAppID;
	uint64_t result;
	FuncPtr_150 ISteamUGC_AddAppDependency;

	nPublishedFileID = require_str_to_uint64_t(0);
	nAppID = jsal_require_uint(1);

	ISteamUGC_AddAppDependency = (FuncPtr_150)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddAppDependency");
	result = ISteamUGC_AddAppDependency(ISteamUGC, nPublishedFileID, nAppID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_RemoveAppDependency(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint32_t nAppID;
	uint64_t result;
	FuncPtr_150 ISteamUGC_RemoveAppDependency;

	nPublishedFileID = require_str_to_uint64_t(0);
	nAppID = jsal_require_uint(1);

	ISteamUGC_RemoveAppDependency = (FuncPtr_150)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveAppDependency");
	result = ISteamUGC_RemoveAppDependency(ISteamUGC, nPublishedFileID, nAppID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_GetAppDependencies(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_046 ISteamUGC_GetAppDependencies;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_GetAppDependencies = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetAppDependencies");
	result = ISteamUGC_GetAppDependencies(ISteamUGC, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_DeleteItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_046 ISteamUGC_DeleteItem;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_DeleteItem = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_DeleteItem");
	result = ISteamUGC_DeleteItem(ISteamUGC, nPublishedFileID);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_GetWorkshopEULAStatus(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_009 ISteamUGC_GetWorkshopEULAStatus;

	ISteamUGC_GetWorkshopEULAStatus = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetWorkshopEULAStatus");
	result = ISteamUGC_GetWorkshopEULAStatus(ISteamUGC);

	push_uint64_t_to_str(result);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCResult(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	SteamUGCDetails_t pDetails;
	bool result;
	FuncPtr_126 ISteamUGC_GetQueryUGCResult;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);

	ISteamUGC_GetQueryUGCResult = (FuncPtr_126)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCResult");
	result = ISteamUGC_GetQueryUGCResult(ISteamUGC, handle, index, &pDetails);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_new_object();
	push_uint64_t_to_str(pDetails.m_nPublishedFileId);
	jsal_put_prop_string(-2, "m_nPublishedFileId");
	jsal_push_uint(pDetails.m_eResult);
	jsal_put_prop_string(-2, "m_eResult");
	jsal_push_uint(pDetails.m_eFileType);
	jsal_put_prop_string(-2, "m_eFileType");
	jsal_push_uint(pDetails.m_nCreatorAppID);
	jsal_put_prop_string(-2, "m_nCreatorAppID");
	jsal_push_uint(pDetails.m_nConsumerAppID);
	jsal_put_prop_string(-2, "m_nConsumerAppID");
	jsal_push_int(pDetails.m_rgchTitle [129]);
	jsal_put_prop_string(-2, "m_rgchTitle [129]");
	jsal_push_int(pDetails.m_rgchDescription [8000]);
	jsal_put_prop_string(-2, "m_rgchDescription [8000]");
	push_uint64_t_to_str(pDetails.m_ulSteamIDOwner);
	jsal_put_prop_string(-2, "m_ulSteamIDOwner");
	jsal_push_uint(pDetails.m_rtimeCreated);
	jsal_put_prop_string(-2, "m_rtimeCreated");
	jsal_push_uint(pDetails.m_rtimeUpdated);
	jsal_put_prop_string(-2, "m_rtimeUpdated");
	jsal_push_uint(pDetails.m_rtimeAddedToUserList);
	jsal_put_prop_string(-2, "m_rtimeAddedToUserList");
	jsal_push_uint(pDetails.m_eVisibility);
	jsal_put_prop_string(-2, "m_eVisibility");
	jsal_push_boolean(pDetails.m_bBanned);
	jsal_put_prop_string(-2, "m_bBanned");
	jsal_push_boolean(pDetails.m_bAcceptedForUse);
	jsal_put_prop_string(-2, "m_bAcceptedForUse");
	jsal_push_boolean(pDetails.m_bTagsTruncated);
	jsal_put_prop_string(-2, "m_bTagsTruncated");
	jsal_push_int(pDetails.m_rgchTags [1025]);
	jsal_put_prop_string(-2, "m_rgchTags [1025]");
	push_uint64_t_to_str(pDetails.m_hFile);
	jsal_put_prop_string(-2, "m_hFile");
	push_uint64_t_to_str(pDetails.m_hPreviewFile);
	jsal_put_prop_string(-2, "m_hPreviewFile");
	jsal_push_int(pDetails.m_pchFileName [260]);
	jsal_put_prop_string(-2, "m_pchFileName [260]");
	jsal_push_int(pDetails.m_nFileSize);
	jsal_put_prop_string(-2, "m_nFileSize");
	jsal_push_int(pDetails.m_nPreviewFileSize);
	jsal_put_prop_string(-2, "m_nPreviewFileSize");
	jsal_push_int(pDetails.m_rgchURL [256]);
	jsal_put_prop_string(-2, "m_rgchURL [256]");
	jsal_push_uint(pDetails.m_unVotesUp);
	jsal_put_prop_string(-2, "m_unVotesUp");
	jsal_push_uint(pDetails.m_unVotesDown);
	jsal_put_prop_string(-2, "m_unVotesDown");
	jsal_push_number(pDetails.m_flScore);
	jsal_put_prop_string(-2, "m_flScore");
	jsal_push_uint(pDetails.m_unNumChildren);
	jsal_put_prop_string(-2, "m_unNumChildren");
	jsal_put_prop_string(-2, "pDetails");

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t indexTag;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_127 ISteamUGC_GetQueryUGCTag;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	indexTag = jsal_require_uint(2);
	cchValueSize = jsal_require_uint(3);

	if (!(pchValue = (char *)calloc(cchValueSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCTag = (FuncPtr_127)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCTag");
	result = ISteamUGC_GetQueryUGCTag(ISteamUGC, handle, index, indexTag, pchValue, cchValueSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchValue);
	jsal_put_prop_string(-2, "pchValue");

	free(pchValue);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCTagDisplayName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t indexTag;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_127 ISteamUGC_GetQueryUGCTagDisplayName;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	indexTag = jsal_require_uint(2);
	cchValueSize = jsal_require_uint(3);

	if (!(pchValue = (char *)calloc(cchValueSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCTagDisplayName = (FuncPtr_127)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName");
	result = ISteamUGC_GetQueryUGCTagDisplayName(ISteamUGC, handle, index, indexTag, pchValue, cchValueSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchValue);
	jsal_put_prop_string(-2, "pchValue");

	free(pchValue);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCPreviewURL(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	char * pchURL;
	uint32_t cchURLSize;
	bool result;
	FuncPtr_128 ISteamUGC_GetQueryUGCPreviewURL;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	cchURLSize = jsal_require_uint(2);

	if (!(pchURL = (char *)calloc(cchURLSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCPreviewURL = (FuncPtr_128)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCPreviewURL");
	result = ISteamUGC_GetQueryUGCPreviewURL(ISteamUGC, handle, index, pchURL, cchURLSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchURL);
	jsal_put_prop_string(-2, "pchURL");

	free(pchURL);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	char * pchMetadata;
	uint32_t cchMetadatasize;
	bool result;
	FuncPtr_128 ISteamUGC_GetQueryUGCMetadata;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	cchMetadatasize = jsal_require_uint(2);

	if (!(pchMetadata = (char *)calloc(cchMetadatasize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCMetadata = (FuncPtr_128)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCMetadata");
	result = ISteamUGC_GetQueryUGCMetadata(ISteamUGC, handle, index, pchMetadata, cchMetadatasize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchMetadata);
	jsal_put_prop_string(-2, "pchMetadata");

	free(pchMetadata);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCChildren(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint64_t * pvecPublishedFileID;
	uint32_t cMaxEntries;
	bool result;
	FuncPtr_129 ISteamUGC_GetQueryUGCChildren;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	cMaxEntries = jsal_require_uint(2);

	if (!(pvecPublishedFileID = (uint64_t *)calloc(cMaxEntries, sizeof(uint64_t))))
		return false;

	ISteamUGC_GetQueryUGCChildren = (FuncPtr_129)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCChildren");
	result = ISteamUGC_GetQueryUGCChildren(ISteamUGC, handle, index, pvecPublishedFileID, cMaxEntries);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	int pvecPublishedFileIDIndex;
	jsal_push_new_array();
	for (pvecPublishedFileIDIndex = 0; pvecPublishedFileIDIndex < (int)cMaxEntries; ++pvecPublishedFileIDIndex)
	{
		push_uint64_t_to_str(pvecPublishedFileID[pvecPublishedFileIDIndex]);
		jsal_put_prop_index(-2, pvecPublishedFileIDIndex);
	}
	jsal_put_prop_string(-2, "pvecPublishedFileID");

	free(pvecPublishedFileID);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCStatistic(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t eStatType;
	uint64_t pStatValue;
	bool result;
	FuncPtr_130 ISteamUGC_GetQueryUGCStatistic;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	eStatType = jsal_require_uint(2);

	ISteamUGC_GetQueryUGCStatistic = (FuncPtr_130)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCStatistic");
	result = ISteamUGC_GetQueryUGCStatistic(ISteamUGC, handle, index, eStatType, &pStatValue);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	push_uint64_t_to_str(pStatValue);
	jsal_put_prop_string(-2, "pStatValue");

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCAdditionalPreview(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t previewIndex;
	char * pchURLOrVideoID;
	uint32_t cchURLSize;
	char * pchOriginalFileName;
	uint32_t cchOriginalFileNameSize;
	uint32_t pPreviewType;
	bool result;
	FuncPtr_131 ISteamUGC_GetQueryUGCAdditionalPreview;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	previewIndex = jsal_require_uint(2);
	cchURLSize = jsal_require_uint(3);
	cchOriginalFileNameSize = jsal_require_uint(4);

	if (!(pchURLOrVideoID = (char *)calloc(cchURLSize, sizeof(char))))
		return false;
	if (!(pchOriginalFileName = (char *)calloc(cchURLSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCAdditionalPreview = (FuncPtr_131)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview");
	result = ISteamUGC_GetQueryUGCAdditionalPreview(ISteamUGC, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, &pPreviewType);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchURLOrVideoID);
	jsal_put_prop_string(-2, "pchURLOrVideoID");
	jsal_push_string(pchOriginalFileName);
	jsal_put_prop_string(-2, "pchOriginalFileName");
	jsal_push_uint(pPreviewType);
	jsal_put_prop_string(-2, "pPreviewType");

	free(pchURLOrVideoID);
	free(pchOriginalFileName);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t keyValueTagIndex;
	char * pchKey;
	uint32_t cchKeySize;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_132 ISteamUGC_GetQueryUGCKeyValueTag;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	keyValueTagIndex = jsal_require_uint(2);
	cchKeySize = jsal_require_uint(3);
	cchValueSize = jsal_require_uint(4);

	if (!(pchKey = (char *)calloc(cchKeySize, sizeof(char))))
		return false;
	if (!(pchValue = (char *)calloc(cchValueSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryUGCKeyValueTag = (FuncPtr_132)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag");
	result = ISteamUGC_GetQueryUGCKeyValueTag(ISteamUGC, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchKey);
	jsal_put_prop_string(-2, "pchKey");
	jsal_push_string(pchValue);
	jsal_put_prop_string(-2, "pchValue");

	free(pchKey);
	free(pchValue);

	return true;
}

static bool
js_ISteamUGC_GetQueryFirstUGCKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	const char * pchKey;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_133 ISteamUGC_GetQueryFirstUGCKeyValueTag;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	pchKey = (char*)jsal_require_string(2);
	cchValueSize = jsal_require_uint(3);

	if (!(pchValue = (char *)calloc(cchValueSize, sizeof(char))))
		return false;

	ISteamUGC_GetQueryFirstUGCKeyValueTag = (FuncPtr_133)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag");
	result = ISteamUGC_GetQueryFirstUGCKeyValueTag(ISteamUGC, handle, index, pchKey, pchValue, cchValueSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_string(pchValue);
	jsal_put_prop_string(-2, "pchValue");

	free(pchValue);

	return true;
}

static bool
js_ISteamUGC_ReleaseQueryUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool result;
	FuncPtr_050 ISteamUGC_ReleaseQueryUGCRequest;

	handle = require_str_to_uint64_t(0);

	ISteamUGC_ReleaseQueryUGCRequest = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_ReleaseQueryUGCRequest");
	result = ISteamUGC_ReleaseQueryUGCRequest(ISteamUGC, handle);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddRequiredTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pTagName;
	bool result;
	FuncPtr_049 ISteamUGC_AddRequiredTag;

	handle = require_str_to_uint64_t(0);
	pTagName = (char*)jsal_require_string(1);

	ISteamUGC_AddRequiredTag = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddRequiredTag");
	result = ISteamUGC_AddRequiredTag(ISteamUGC, handle, pTagName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddRequiredTagGroup(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	SteamParamStringArray_t pTagGroups;
	bool result;
	FuncPtr_135 ISteamUGC_AddRequiredTagGroup;

	handle = require_str_to_uint64_t(0);
	jsal_require_array(1);
	pTagGroups.m_nNumStrings = jsal_get_length(1);
	if (!(pTagGroups.m_ppStrings = (char **)malloc(pTagGroups.m_nNumStrings * sizeof(char *))))
		return false;
	for (int i = 0; i < pTagGroups.m_nNumStrings; ++i){
		jsal_get_prop_index(1, i);
		pTagGroups.m_ppStrings[i] = (char*)jsal_require_string(-1);
		jsal_pop(1);
	}

	ISteamUGC_AddRequiredTagGroup = (FuncPtr_135)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddRequiredTagGroup");
	result = ISteamUGC_AddRequiredTagGroup(ISteamUGC, handle, &pTagGroups);

	jsal_push_boolean(result);

	free(pTagGroups.m_ppStrings);

	return true;
}

static bool
js_ISteamUGC_AddExcludedTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pTagName;
	bool result;
	FuncPtr_049 ISteamUGC_AddExcludedTag;

	handle = require_str_to_uint64_t(0);
	pTagName = (char*)jsal_require_string(1);

	ISteamUGC_AddExcludedTag = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddExcludedTag");
	result = ISteamUGC_AddExcludedTag(ISteamUGC, handle, pTagName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnOnlyIDs(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnOnlyIDs;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnOnlyIDs;

	handle = require_str_to_uint64_t(0);
	bReturnOnlyIDs = jsal_require_boolean(1);

	ISteamUGC_SetReturnOnlyIDs = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnOnlyIDs");
	result = ISteamUGC_SetReturnOnlyIDs(ISteamUGC, handle, bReturnOnlyIDs);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnKeyValueTags;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnKeyValueTags;

	handle = require_str_to_uint64_t(0);
	bReturnKeyValueTags = jsal_require_boolean(1);

	ISteamUGC_SetReturnKeyValueTags = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnKeyValueTags");
	result = ISteamUGC_SetReturnKeyValueTags(ISteamUGC, handle, bReturnKeyValueTags);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnLongDescription(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnLongDescription;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnLongDescription;

	handle = require_str_to_uint64_t(0);
	bReturnLongDescription = jsal_require_boolean(1);

	ISteamUGC_SetReturnLongDescription = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnLongDescription");
	result = ISteamUGC_SetReturnLongDescription(ISteamUGC, handle, bReturnLongDescription);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnMetadata;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnMetadata;

	handle = require_str_to_uint64_t(0);
	bReturnMetadata = jsal_require_boolean(1);

	ISteamUGC_SetReturnMetadata = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnMetadata");
	result = ISteamUGC_SetReturnMetadata(ISteamUGC, handle, bReturnMetadata);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnChildren(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnChildren;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnChildren;

	handle = require_str_to_uint64_t(0);
	bReturnChildren = jsal_require_boolean(1);

	ISteamUGC_SetReturnChildren = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnChildren");
	result = ISteamUGC_SetReturnChildren(ISteamUGC, handle, bReturnChildren);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnAdditionalPreviews(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnAdditionalPreviews;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnAdditionalPreviews;

	handle = require_str_to_uint64_t(0);
	bReturnAdditionalPreviews = jsal_require_boolean(1);

	ISteamUGC_SetReturnAdditionalPreviews = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnAdditionalPreviews");
	result = ISteamUGC_SetReturnAdditionalPreviews(ISteamUGC, handle, bReturnAdditionalPreviews);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnTotalOnly(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bReturnTotalOnly;
	bool result;
	FuncPtr_045 ISteamUGC_SetReturnTotalOnly;

	handle = require_str_to_uint64_t(0);
	bReturnTotalOnly = jsal_require_boolean(1);

	ISteamUGC_SetReturnTotalOnly = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnTotalOnly");
	result = ISteamUGC_SetReturnTotalOnly(ISteamUGC, handle, bReturnTotalOnly);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetReturnPlaytimeStats(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t unDays;
	bool result;
	FuncPtr_054 ISteamUGC_SetReturnPlaytimeStats;

	handle = require_str_to_uint64_t(0);
	unDays = jsal_require_uint(1);

	ISteamUGC_SetReturnPlaytimeStats = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetReturnPlaytimeStats");
	result = ISteamUGC_SetReturnPlaytimeStats(ISteamUGC, handle, unDays);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchLanguage;
	bool result;
	FuncPtr_049 ISteamUGC_SetLanguage;

	handle = require_str_to_uint64_t(0);
	pchLanguage = (char*)jsal_require_string(1);

	ISteamUGC_SetLanguage = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetLanguage");
	result = ISteamUGC_SetLanguage(ISteamUGC, handle, pchLanguage);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetAllowCachedResponse(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t unMaxAgeSeconds;
	bool result;
	FuncPtr_054 ISteamUGC_SetAllowCachedResponse;

	handle = require_str_to_uint64_t(0);
	unMaxAgeSeconds = jsal_require_uint(1);

	ISteamUGC_SetAllowCachedResponse = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetAllowCachedResponse");
	result = ISteamUGC_SetAllowCachedResponse(ISteamUGC, handle, unMaxAgeSeconds);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetCloudFileNameFilter(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pMatchCloudFileName;
	bool result;
	FuncPtr_049 ISteamUGC_SetCloudFileNameFilter;

	handle = require_str_to_uint64_t(0);
	pMatchCloudFileName = (char*)jsal_require_string(1);

	ISteamUGC_SetCloudFileNameFilter = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetCloudFileNameFilter");
	result = ISteamUGC_SetCloudFileNameFilter(ISteamUGC, handle, pMatchCloudFileName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetMatchAnyTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bMatchAnyTag;
	bool result;
	FuncPtr_045 ISteamUGC_SetMatchAnyTag;

	handle = require_str_to_uint64_t(0);
	bMatchAnyTag = jsal_require_boolean(1);

	ISteamUGC_SetMatchAnyTag = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetMatchAnyTag");
	result = ISteamUGC_SetMatchAnyTag(ISteamUGC, handle, bMatchAnyTag);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetSearchText(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pSearchText;
	bool result;
	FuncPtr_049 ISteamUGC_SetSearchText;

	handle = require_str_to_uint64_t(0);
	pSearchText = (char*)jsal_require_string(1);

	ISteamUGC_SetSearchText = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetSearchText");
	result = ISteamUGC_SetSearchText(ISteamUGC, handle, pSearchText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetRankedByTrendDays(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t unDays;
	bool result;
	FuncPtr_054 ISteamUGC_SetRankedByTrendDays;

	handle = require_str_to_uint64_t(0);
	unDays = jsal_require_uint(1);

	ISteamUGC_SetRankedByTrendDays = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetRankedByTrendDays");
	result = ISteamUGC_SetRankedByTrendDays(ISteamUGC, handle, unDays);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetTimeCreatedDateRange(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t rtStart;
	uint32_t rtEnd;
	bool result;
	FuncPtr_136 ISteamUGC_SetTimeCreatedDateRange;

	handle = require_str_to_uint64_t(0);
	rtStart = jsal_require_uint(1);
	rtEnd = jsal_require_uint(2);

	ISteamUGC_SetTimeCreatedDateRange = (FuncPtr_136)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetTimeCreatedDateRange");
	result = ISteamUGC_SetTimeCreatedDateRange(ISteamUGC, handle, rtStart, rtEnd);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetTimeUpdatedDateRange(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t rtStart;
	uint32_t rtEnd;
	bool result;
	FuncPtr_136 ISteamUGC_SetTimeUpdatedDateRange;

	handle = require_str_to_uint64_t(0);
	rtStart = jsal_require_uint(1);
	rtEnd = jsal_require_uint(2);

	ISteamUGC_SetTimeUpdatedDateRange = (FuncPtr_136)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetTimeUpdatedDateRange");
	result = ISteamUGC_SetTimeUpdatedDateRange(ISteamUGC, handle, rtStart, rtEnd);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddRequiredKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pKey;
	const char * pValue;
	bool result;
	FuncPtr_137 ISteamUGC_AddRequiredKeyValueTag;

	handle = require_str_to_uint64_t(0);
	pKey = (char*)jsal_require_string(1);
	pValue = (char*)jsal_require_string(2);

	ISteamUGC_AddRequiredKeyValueTag = (FuncPtr_137)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddRequiredKeyValueTag");
	result = ISteamUGC_AddRequiredKeyValueTag(ISteamUGC, handle, pKey, pValue);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemTitle(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchTitle;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemTitle;

	handle = require_str_to_uint64_t(0);
	pchTitle = (char*)jsal_require_string(1);

	ISteamUGC_SetItemTitle = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemTitle");
	result = ISteamUGC_SetItemTitle(ISteamUGC, handle, pchTitle);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemDescription(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchDescription;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemDescription;

	handle = require_str_to_uint64_t(0);
	pchDescription = (char*)jsal_require_string(1);

	ISteamUGC_SetItemDescription = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemDescription");
	result = ISteamUGC_SetItemDescription(ISteamUGC, handle, pchDescription);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemUpdateLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchLanguage;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemUpdateLanguage;

	handle = require_str_to_uint64_t(0);
	pchLanguage = (char*)jsal_require_string(1);

	ISteamUGC_SetItemUpdateLanguage = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemUpdateLanguage");
	result = ISteamUGC_SetItemUpdateLanguage(ISteamUGC, handle, pchLanguage);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchMetaData;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemMetadata;

	handle = require_str_to_uint64_t(0);
	pchMetaData = (char*)jsal_require_string(1);

	ISteamUGC_SetItemMetadata = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemMetadata");
	result = ISteamUGC_SetItemMetadata(ISteamUGC, handle, pchMetaData);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemVisibility(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t eVisibility;
	bool result;
	FuncPtr_054 ISteamUGC_SetItemVisibility;

	handle = require_str_to_uint64_t(0);
	eVisibility = jsal_require_uint(1);

	ISteamUGC_SetItemVisibility = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemVisibility");
	result = ISteamUGC_SetItemVisibility(ISteamUGC, handle, eVisibility);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t updateHandle;
	SteamParamStringArray_t pTags;
	bool bAllowAdminTags;
	bool result;
	FuncPtr_140 ISteamUGC_SetItemTags;

	updateHandle = require_str_to_uint64_t(0);
	jsal_require_array(1);
	pTags.m_nNumStrings = jsal_get_length(1);
	if (!(pTags.m_ppStrings = (char **)malloc(pTags.m_nNumStrings * sizeof(char *))))
		return false;
	for (int i = 0; i < pTags.m_nNumStrings; ++i){
		jsal_get_prop_index(1, i);
		pTags.m_ppStrings[i] = (char*)jsal_require_string(-1);
		jsal_pop(1);
	}
	bAllowAdminTags = jsal_require_boolean(2);

	ISteamUGC_SetItemTags = (FuncPtr_140)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemTags");
	result = ISteamUGC_SetItemTags(ISteamUGC, updateHandle, &pTags, bAllowAdminTags);

	jsal_push_boolean(result);

	free(pTags.m_ppStrings);

	return true;
}

static bool
js_ISteamUGC_SetItemContent(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pszContentFolder;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemContent;

	handle = require_str_to_uint64_t(0);
	pszContentFolder = (char*)jsal_require_string(1);

	ISteamUGC_SetItemContent = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemContent");
	result = ISteamUGC_SetItemContent(ISteamUGC, handle, pszContentFolder);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetItemPreview(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pszPreviewFile;
	bool result;
	FuncPtr_049 ISteamUGC_SetItemPreview;

	handle = require_str_to_uint64_t(0);
	pszPreviewFile = (char*)jsal_require_string(1);

	ISteamUGC_SetItemPreview = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetItemPreview");
	result = ISteamUGC_SetItemPreview(ISteamUGC, handle, pszPreviewFile);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_SetAllowLegacyUpload(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool bAllowLegacyUpload;
	bool result;
	FuncPtr_045 ISteamUGC_SetAllowLegacyUpload;

	handle = require_str_to_uint64_t(0);
	bAllowLegacyUpload = jsal_require_boolean(1);

	ISteamUGC_SetAllowLegacyUpload = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SetAllowLegacyUpload");
	result = ISteamUGC_SetAllowLegacyUpload(ISteamUGC, handle, bAllowLegacyUpload);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_RemoveAllItemKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	bool result;
	FuncPtr_050 ISteamUGC_RemoveAllItemKeyValueTags;

	handle = require_str_to_uint64_t(0);

	ISteamUGC_RemoveAllItemKeyValueTags = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags");
	result = ISteamUGC_RemoveAllItemKeyValueTags(ISteamUGC, handle);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_RemoveItemKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchKey;
	bool result;
	FuncPtr_049 ISteamUGC_RemoveItemKeyValueTags;

	handle = require_str_to_uint64_t(0);
	pchKey = (char*)jsal_require_string(1);

	ISteamUGC_RemoveItemKeyValueTags = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveItemKeyValueTags");
	result = ISteamUGC_RemoveItemKeyValueTags(ISteamUGC, handle, pchKey);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddItemKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_137 ISteamUGC_AddItemKeyValueTag;

	handle = require_str_to_uint64_t(0);
	pchKey = (char*)jsal_require_string(1);
	pchValue = (char*)jsal_require_string(2);

	ISteamUGC_AddItemKeyValueTag = (FuncPtr_137)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddItemKeyValueTag");
	result = ISteamUGC_AddItemKeyValueTag(ISteamUGC, handle, pchKey, pchValue);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddItemPreviewFile(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pszPreviewFile;
	uint32_t type;
	bool result;
	FuncPtr_141 ISteamUGC_AddItemPreviewFile;

	handle = require_str_to_uint64_t(0);
	pszPreviewFile = (char*)jsal_require_string(1);
	type = jsal_require_uint(2);

	ISteamUGC_AddItemPreviewFile = (FuncPtr_141)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddItemPreviewFile");
	result = ISteamUGC_AddItemPreviewFile(ISteamUGC, handle, pszPreviewFile, type);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddItemPreviewVideo(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	const char * pszVideoID;
	bool result;
	FuncPtr_049 ISteamUGC_AddItemPreviewVideo;

	handle = require_str_to_uint64_t(0);
	pszVideoID = (char*)jsal_require_string(1);

	ISteamUGC_AddItemPreviewVideo = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddItemPreviewVideo");
	result = ISteamUGC_AddItemPreviewVideo(ISteamUGC, handle, pszVideoID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_UpdateItemPreviewFile(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	const char * pszPreviewFile;
	bool result;
	FuncPtr_142 ISteamUGC_UpdateItemPreviewFile;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	pszPreviewFile = (char*)jsal_require_string(2);

	ISteamUGC_UpdateItemPreviewFile = (FuncPtr_142)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_UpdateItemPreviewFile");
	result = ISteamUGC_UpdateItemPreviewFile(ISteamUGC, handle, index, pszPreviewFile);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_UpdateItemPreviewVideo(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	const char * pszVideoID;
	bool result;
	FuncPtr_142 ISteamUGC_UpdateItemPreviewVideo;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	pszVideoID = (char*)jsal_require_string(2);

	ISteamUGC_UpdateItemPreviewVideo = (FuncPtr_142)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_UpdateItemPreviewVideo");
	result = ISteamUGC_UpdateItemPreviewVideo(ISteamUGC, handle, index, pszVideoID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_RemoveItemPreview(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	bool result;
	FuncPtr_054 ISteamUGC_RemoveItemPreview;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);

	ISteamUGC_RemoveItemPreview = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveItemPreview");
	result = ISteamUGC_RemoveItemPreview(ISteamUGC, handle, index);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_AddContentDescriptor(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t descid;
	bool result;
	FuncPtr_054 ISteamUGC_AddContentDescriptor;

	handle = require_str_to_uint64_t(0);
	descid = jsal_require_uint(1);

	ISteamUGC_AddContentDescriptor = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_AddContentDescriptor");
	result = ISteamUGC_AddContentDescriptor(ISteamUGC, handle, descid);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_RemoveContentDescriptor(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t descid;
	bool result;
	FuncPtr_054 ISteamUGC_RemoveContentDescriptor;

	handle = require_str_to_uint64_t(0);
	descid = jsal_require_uint(1);

	ISteamUGC_RemoveContentDescriptor = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_RemoveContentDescriptor");
	result = ISteamUGC_RemoveContentDescriptor(ISteamUGC, handle, descid);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_GetItemInstallInfo(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t punSizeOnDisk;
	char * pchFolder;
	uint32_t cchFolderSize;
	uint32_t punTimeStamp;
	bool result;
	FuncPtr_147 ISteamUGC_GetItemInstallInfo;

	nPublishedFileID = require_str_to_uint64_t(0);
	cchFolderSize = jsal_require_uint(1);

	if (!(pchFolder = (char *)calloc(cchFolderSize, sizeof(char))))
		return false;

	ISteamUGC_GetItemInstallInfo = (FuncPtr_147)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetItemInstallInfo");
	result = ISteamUGC_GetItemInstallInfo(ISteamUGC, nPublishedFileID, &punSizeOnDisk, pchFolder, cchFolderSize, &punTimeStamp);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	push_uint64_t_to_str(punSizeOnDisk);
	jsal_put_prop_string(-2, "punSizeOnDisk");
	jsal_push_string(pchFolder);
	jsal_put_prop_string(-2, "pchFolder");
	jsal_push_uint(punTimeStamp);
	jsal_put_prop_string(-2, "punTimeStamp");

	free(pchFolder);

	return true;
}

static bool
js_ISteamUGC_GetItemDownloadInfo(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint64_t punBytesDownloaded;
	uint64_t punBytesTotal;
	bool result;
	FuncPtr_148 ISteamUGC_GetItemDownloadInfo;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_GetItemDownloadInfo = (FuncPtr_148)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetItemDownloadInfo");
	result = ISteamUGC_GetItemDownloadInfo(ISteamUGC, nPublishedFileID, &punBytesDownloaded, &punBytesTotal);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	push_uint64_t_to_str(punBytesDownloaded);
	jsal_put_prop_string(-2, "punBytesDownloaded");
	push_uint64_t_to_str(punBytesTotal);
	jsal_put_prop_string(-2, "punBytesTotal");

	return true;
}

static bool
js_ISteamUGC_DownloadItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	bool bHighPriority;
	bool result;
	FuncPtr_045 ISteamUGC_DownloadItem;

	nPublishedFileID = require_str_to_uint64_t(0);
	bHighPriority = jsal_require_boolean(1);

	ISteamUGC_DownloadItem = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_DownloadItem");
	result = ISteamUGC_DownloadItem(ISteamUGC, nPublishedFileID, bHighPriority);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_BInitWorkshopForGameServer(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t unWorkshopDepotID;
	const char * pszFolder;
	bool result;
	FuncPtr_149 ISteamUGC_BInitWorkshopForGameServer;

	unWorkshopDepotID = jsal_require_uint(0);
	pszFolder = (char*)jsal_require_string(1);

	ISteamUGC_BInitWorkshopForGameServer = (FuncPtr_149)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_BInitWorkshopForGameServer");
	result = ISteamUGC_BInitWorkshopForGameServer(ISteamUGC, unWorkshopDepotID, pszFolder);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_ShowWorkshopEULA(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_008 ISteamUGC_ShowWorkshopEULA;

	ISteamUGC_ShowWorkshopEULA = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_ShowWorkshopEULA");
	result = ISteamUGC_ShowWorkshopEULA(ISteamUGC);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCNumTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_017 ISteamUGC_GetQueryUGCNumTags;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);

	ISteamUGC_GetQueryUGCNumTags = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumTags");
	result = ISteamUGC_GetQueryUGCNumTags(ISteamUGC, handle, index);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCNumAdditionalPreviews(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_017 ISteamUGC_GetQueryUGCNumAdditionalPreviews;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);

	ISteamUGC_GetQueryUGCNumAdditionalPreviews = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews");
	result = ISteamUGC_GetQueryUGCNumAdditionalPreviews(ISteamUGC, handle, index);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCNumKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_017 ISteamUGC_GetQueryUGCNumKeyValueTags;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);

	ISteamUGC_GetQueryUGCNumKeyValueTags = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags");
	result = ISteamUGC_GetQueryUGCNumKeyValueTags(ISteamUGC, handle, index);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_GetQueryUGCContentDescriptors(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint32_t index;
	uint32_t * pvecDescriptors;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_134 ISteamUGC_GetQueryUGCContentDescriptors;

	handle = require_str_to_uint64_t(0);
	index = jsal_require_uint(1);
	cMaxEntries = jsal_require_uint(2);

	if (!(pvecDescriptors = (uint32_t *)calloc(cMaxEntries, sizeof(uint32_t))))
		return false;

	ISteamUGC_GetQueryUGCContentDescriptors = (FuncPtr_134)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors");
	result = ISteamUGC_GetQueryUGCContentDescriptors(ISteamUGC, handle, index, pvecDescriptors, cMaxEntries);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	int pvecDescriptorsIndex;
	jsal_push_new_array();
	for (pvecDescriptorsIndex = 0; pvecDescriptorsIndex < (int)cMaxEntries; ++pvecDescriptorsIndex)
	{
		jsal_push_uint(pvecDescriptors[pvecDescriptorsIndex]);
		jsal_put_prop_index(-2, pvecDescriptorsIndex);
	}
	jsal_put_prop_string(-2, "pvecDescriptors");

	free(pvecDescriptors);

	return true;
}

static bool
js_ISteamUGC_GetItemUpdateProgress(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t handle;
	uint64_t punBytesProcessed;
	uint64_t punBytesTotal;
	uint32_t result;
	FuncPtr_144 ISteamUGC_GetItemUpdateProgress;

	handle = require_str_to_uint64_t(0);

	ISteamUGC_GetItemUpdateProgress = (FuncPtr_144)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetItemUpdateProgress");
	result = ISteamUGC_GetItemUpdateProgress(ISteamUGC, handle, &punBytesProcessed, &punBytesTotal);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	push_uint64_t_to_str(punBytesProcessed);
	jsal_put_prop_string(-2, "punBytesProcessed");
	push_uint64_t_to_str(punBytesTotal);
	jsal_put_prop_string(-2, "punBytesTotal");

	return true;
}

static bool
js_ISteamUGC_GetNumSubscribedItems(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_013 ISteamUGC_GetNumSubscribedItems;

	ISteamUGC_GetNumSubscribedItems = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetNumSubscribedItems");
	result = ISteamUGC_GetNumSubscribedItems(ISteamUGC);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_GetSubscribedItems(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * pvecPublishedFileID;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_146 ISteamUGC_GetSubscribedItems;

	cMaxEntries = jsal_require_uint(0);

	if (!(pvecPublishedFileID = (uint64_t *)calloc(cMaxEntries, sizeof(uint64_t))))
		return false;

	ISteamUGC_GetSubscribedItems = (FuncPtr_146)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetSubscribedItems");
	result = ISteamUGC_GetSubscribedItems(ISteamUGC, pvecPublishedFileID, cMaxEntries);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	int pvecPublishedFileIDIndex;
	jsal_push_new_array();
	for (pvecPublishedFileIDIndex = 0; pvecPublishedFileIDIndex < (int)cMaxEntries; ++pvecPublishedFileIDIndex)
	{
		push_uint64_t_to_str(pvecPublishedFileID[pvecPublishedFileIDIndex]);
		jsal_put_prop_index(-2, pvecPublishedFileIDIndex);
	}
	jsal_put_prop_string(-2, "pvecPublishedFileID");

	free(pvecPublishedFileID);

	return true;
}

static bool
js_ISteamUGC_GetItemState(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t nPublishedFileID;
	uint32_t result;
	FuncPtr_025 ISteamUGC_GetItemState;

	nPublishedFileID = require_str_to_uint64_t(0);

	ISteamUGC_GetItemState = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetItemState");
	result = ISteamUGC_GetItemState(ISteamUGC, nPublishedFileID);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUGC_GetUserContentDescriptorPreferences(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t * pvecDescriptors;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_151 ISteamUGC_GetUserContentDescriptorPreferences;

	cMaxEntries = jsal_require_uint(0);

	if (!(pvecDescriptors = (uint32_t *)calloc(cMaxEntries, sizeof(uint32_t))))
		return false;

	ISteamUGC_GetUserContentDescriptorPreferences = (FuncPtr_151)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences");
	result = ISteamUGC_GetUserContentDescriptorPreferences(ISteamUGC, pvecDescriptors, cMaxEntries);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	int pvecDescriptorsIndex;
	jsal_push_new_array();
	for (pvecDescriptorsIndex = 0; pvecDescriptorsIndex < (int)cMaxEntries; ++pvecDescriptorsIndex)
	{
		jsal_push_uint(pvecDescriptors[pvecDescriptorsIndex]);
		jsal_put_prop_index(-2, pvecDescriptorsIndex);
	}
	jsal_put_prop_string(-2, "pvecDescriptors");

	free(pvecDescriptors);

	return true;
}

static bool
js_ISteamUGC_SuspendDownloads(int num_args, bool is_ctor, intptr_t magic)
{
	bool bSuspend;
	FuncPtr_064 ISteamUGC_SuspendDownloads;

	bSuspend = jsal_require_boolean(0);

	ISteamUGC_SuspendDownloads = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamUGC_SuspendDownloads");
	ISteamUGC_SuspendDownloads(ISteamUGC, bSuspend);

	return false;
}

