#ifndef LLMESSAGEID_H_
#define LLMESSAGEID_H_

namespace Scaffold
{
    namespace LLStack
    {
        const msg_id_t StartPingCheck                           = 0x1;
        const msg_id_t CompletePingCheck                        = 0x2;
        const msg_id_t NeighborList                             = 0x3;
        const msg_id_t AgentUpdate                              = 0x4;
        const msg_id_t AgentAnimation                           = 0x5;
        const msg_id_t AgentRequestSit                          = 0x6;
        const msg_id_t AgentSit                                 = 0x7;
        const msg_id_t RequestImage                             = 0x8;
        const msg_id_t ImageData                                = 0x9;
        const msg_id_t ImagePacket                              = 0xa;
        const msg_id_t LayerData                                = 0xb;
        const msg_id_t ObjectUpdate                             = 0xc;
        const msg_id_t ObjectUpdateCompressed                   = 0xd;
        const msg_id_t ObjectUpdateCached                       = 0xe;
        const msg_id_t ImprovedTerseObjectUpdate                = 0xf;
        const msg_id_t KillObject                               = 0x10;
        const msg_id_t TransferPacket                           = 0x11;
        const msg_id_t SendXferPacket                           = 0x12;
        const msg_id_t ConfirmXferPacket                        = 0x13;
        const msg_id_t AvatarAnimation                          = 0x14;
        const msg_id_t AvatarSitResponse                        = 0x15;
        const msg_id_t CameraConstraint                         = 0x16;
        const msg_id_t ParcelProperties                         = 0x17;
        const msg_id_t EdgeDataPacket                           = 0x18;
        const msg_id_t ChildAgentUpdate                         = 0x19;
        const msg_id_t ChildAgentAlive                          = 0x1a;
        const msg_id_t ChildAgentPositionUpdate                 = 0x1b;
        const msg_id_t AtomicPassObject                         = 0x1c;
        const msg_id_t SoundTrigger                             = 0x1d;
        const msg_id_t ObjectAdd                                = 0xff01;
        const msg_id_t MultipleObjectUpdate                     = 0xff02;
        const msg_id_t RequestMultipleObjects                   = 0xff03;
        const msg_id_t ObjectPosition                           = 0xff04;
        const msg_id_t RequestObjectPropertiesFamily            = 0xff05;
        const msg_id_t CoarseLocationUpdate                     = 0xff06;
        const msg_id_t CrossedRegion                            = 0xff07;
        const msg_id_t ConfirmEnableSimulator                   = 0xff08;
        const msg_id_t ObjectProperties                         = 0xff09;
        const msg_id_t ObjectPropertiesFamily                   = 0xff0a;
        const msg_id_t ParcelPropertiesRequest                  = 0xff0b;
        const msg_id_t SimStatus                                = 0xff0c;
        const msg_id_t AttachedSound                            = 0xff0d;
        const msg_id_t AttachedSoundGainChange                  = 0xff0e;
        const msg_id_t PreloadSound                             = 0xff0f;
        const msg_id_t InternalScriptMail                       = 0xff10;
        const msg_id_t ViewerEffect                             = 0xff11;
        const msg_id_t TestMessage                              = 0xffff0001;
        const msg_id_t AddCircuitCode                           = 0xffff0002;
        const msg_id_t UseCircuitCode                           = 0xffff0003;
        const msg_id_t AvatarTextureUpdate                      = 0xffff0004;
        const msg_id_t SimulatorMapUpdate                       = 0xffff0005;
        const msg_id_t SimulatorSetMap                          = 0xffff0006;
        const msg_id_t SubscribeLoad                            = 0xffff0007;
        const msg_id_t UnsubscribeLoad                          = 0xffff0008;
        const msg_id_t SimulatorReady                           = 0xffff0009;
        const msg_id_t TelehubInfo                              = 0xffff000a;
        const msg_id_t SimulatorPresentAtLocation               = 0xffff000b;
        const msg_id_t SimulatorLoad                            = 0xffff000c;
        const msg_id_t SimulatorShutdownRequest                 = 0xffff000d;
        const msg_id_t RegionPresenceRequestByRegionID          = 0xffff000e;
        const msg_id_t RegionPresenceRequestByHandle            = 0xffff000f;
        const msg_id_t RegionPresenceResponse                   = 0xffff0010;
        const msg_id_t UpdateSimulator                          = 0xffff0011;
        const msg_id_t LogDwellTime                             = 0xffff0012;
        const msg_id_t FeatureDisabled                          = 0xffff0013;
        const msg_id_t LogFailedMoneyTransaction                = 0xffff0014;
        const msg_id_t UserReportInternal                       = 0xffff0015;
        const msg_id_t SetSimStatusInDatabase                   = 0xffff0016;
        const msg_id_t SetSimPresenceInDatabase                 = 0xffff0017;
        const msg_id_t EconomyDataRequest                       = 0xffff0018;
        const msg_id_t EconomyData                              = 0xffff0019;
        const msg_id_t AvatarPickerRequest                      = 0xffff001a;
        const msg_id_t AvatarPickerRequestBackend               = 0xffff001b;
        const msg_id_t AvatarPickerReply                        = 0xffff001c;
        const msg_id_t PlacesQuery                              = 0xffff001d;
        const msg_id_t PlacesReply                              = 0xffff001e;
        const msg_id_t DirFindQuery                             = 0xffff001f;
        const msg_id_t DirFindQueryBackend                      = 0xffff0020;
        const msg_id_t DirPlacesQuery                           = 0xffff0021;
        const msg_id_t DirPlacesQueryBackend                    = 0xffff0022;
        const msg_id_t DirPlacesReply                           = 0xffff0023;
        const msg_id_t DirPeopleReply                           = 0xffff0024;
        const msg_id_t DirEventsReply                           = 0xffff0025;
        const msg_id_t DirGroupsReply                           = 0xffff0026;
        const msg_id_t DirClassifiedQuery                       = 0xffff0027;
        const msg_id_t DirClassifiedQueryBackend                = 0xffff0028;
        const msg_id_t DirClassifiedReply                       = 0xffff0029;
        const msg_id_t AvatarClassifiedReply                    = 0xffff002a;
        const msg_id_t ClassifiedInfoRequest                    = 0xffff002b;
        const msg_id_t ClassifiedInfoReply                      = 0xffff002c;
        const msg_id_t ClassifiedInfoUpdate                     = 0xffff002d;
        const msg_id_t ClassifiedDelete                         = 0xffff002e;
        const msg_id_t ClassifiedGodDelete                      = 0xffff002f;
        const msg_id_t DirLandQuery                             = 0xffff0030;
        const msg_id_t DirLandQueryBackend                      = 0xffff0031;
        const msg_id_t DirLandReply                             = 0xffff0032;
        const msg_id_t DirPopularQuery                          = 0xffff0033;
        const msg_id_t DirPopularQueryBackend                   = 0xffff0034;
        const msg_id_t DirPopularReply                          = 0xffff0035;
        const msg_id_t ParcelInfoRequest                        = 0xffff0036;
        const msg_id_t ParcelInfoReply                          = 0xffff0037;
        const msg_id_t ParcelObjectOwnersRequest                = 0xffff0038;
        const msg_id_t ParcelObjectOwnersReply                  = 0xffff0039;
        const msg_id_t GroupNoticesListRequest                  = 0xffff003a;
        const msg_id_t GroupNoticesListReply                    = 0xffff003b;
        const msg_id_t GroupNoticeRequest                       = 0xffff003c;
        const msg_id_t GroupNoticeAdd                           = 0xffff003d;
        const msg_id_t TeleportRequest                          = 0xffff003e;
        const msg_id_t TeleportLocationRequest                  = 0xffff003f;
        const msg_id_t TeleportLocal                            = 0xffff0040;
        const msg_id_t TeleportLandmarkRequest                  = 0xffff0041;
        const msg_id_t TeleportProgress                         = 0xffff0042;
        const msg_id_t DataHomeLocationRequest                  = 0xffff0043;
        const msg_id_t DataHomeLocationReply                    = 0xffff0044;
        const msg_id_t TeleportFinish                           = 0xffff0045;
        const msg_id_t StartLure                                = 0xffff0046;
        const msg_id_t TeleportLureRequest                      = 0xffff0047;
        const msg_id_t TeleportCancel                           = 0xffff0048;
        const msg_id_t TeleportStart                            = 0xffff0049;
        const msg_id_t TeleportFailed                           = 0xffff004a;
        const msg_id_t Undo                                     = 0xffff004b;
        const msg_id_t Redo                                     = 0xffff004c;
        const msg_id_t UndoLand                                 = 0xffff004d;
        const msg_id_t AgentPause                               = 0xffff004e;
        const msg_id_t AgentResume                              = 0xffff004f;
        const msg_id_t ChatFromViewer                           = 0xffff0050;
        const msg_id_t AgentThrottle                            = 0xffff0051;
        const msg_id_t AgentFOV                                 = 0xffff0052;
        const msg_id_t AgentHeightWidth                         = 0xffff0053;
        const msg_id_t AgentSetAppearance                       = 0xffff0054;
        const msg_id_t AgentQuitCopy                            = 0xffff0055;
        const msg_id_t ImageNotInDatabase                       = 0xffff0056;
        const msg_id_t RebakeAvatarTextures                     = 0xffff0057;
        const msg_id_t SetAlwaysRun                             = 0xffff0058;
        const msg_id_t ObjectDelete                             = 0xffff0059;
        const msg_id_t ObjectDuplicate                          = 0xffff005a;
        const msg_id_t ObjectDuplicateOnRay                     = 0xffff005b;
        const msg_id_t ObjectScale                              = 0xffff005c;
        const msg_id_t ObjectRotation                           = 0xffff005d;
        const msg_id_t ObjectFlagUpdate                         = 0xffff005e;
        const msg_id_t ObjectClickAction                        = 0xffff005f;
        const msg_id_t ObjectImage                              = 0xffff0060;
        const msg_id_t ObjectMaterial                           = 0xffff0061;
        const msg_id_t ObjectShape                              = 0xffff0062;
        const msg_id_t ObjectExtraParams                        = 0xffff0063;
        const msg_id_t ObjectOwner                              = 0xffff0064;
        const msg_id_t ObjectGroup                              = 0xffff0065;
        const msg_id_t ObjectBuy                                = 0xffff0066;
        const msg_id_t BuyObjectInventory                       = 0xffff0067;
        const msg_id_t DerezContainer                           = 0xffff0068;
        const msg_id_t ObjectPermissions                        = 0xffff0069;
        const msg_id_t ObjectSaleInfo                           = 0xffff006a;
        const msg_id_t ObjectName                               = 0xffff006b;
        const msg_id_t ObjectDescription                        = 0xffff006c;
        const msg_id_t ObjectCategory                           = 0xffff006d;
        const msg_id_t ObjectSelect                             = 0xffff006e;
        const msg_id_t ObjectDeselect                           = 0xffff006f;
        const msg_id_t ObjectAttach                             = 0xffff0070;
        const msg_id_t ObjectDetach                             = 0xffff0071;
        const msg_id_t ObjectDrop                               = 0xffff0072;
        const msg_id_t ObjectLink                               = 0xffff0073;
        const msg_id_t ObjectDelink                             = 0xffff0074;
        const msg_id_t ObjectGrab                               = 0xffff0075;
        const msg_id_t ObjectGrabUpdate                         = 0xffff0076;
        const msg_id_t ObjectDeGrab                             = 0xffff0077;
        const msg_id_t ObjectSpinStart                          = 0xffff0078;
        const msg_id_t ObjectSpinUpdate                         = 0xffff0079;
        const msg_id_t ObjectSpinStop                           = 0xffff007a;
        const msg_id_t ObjectExportSelected                     = 0xffff007b;
        const msg_id_t ModifyLand                               = 0xffff007c;
        const msg_id_t VelocityInterpolateOn                    = 0xffff007d;
        const msg_id_t VelocityInterpolateOff                   = 0xffff007e;
        const msg_id_t StateSave                                = 0xffff007f;
        const msg_id_t ReportAutosaveCrash                      = 0xffff0080;
        const msg_id_t SimWideDeletes                           = 0xffff0081;
        const msg_id_t TrackAgent                               = 0xffff0082;
        const msg_id_t ViewerStats                              = 0xffff0083;
        const msg_id_t ScriptAnswerYes                          = 0xffff0084;
        const msg_id_t UserReport                               = 0xffff0085;
        const msg_id_t AlertMessage                             = 0xffff0086;
        const msg_id_t AgentAlertMessage                        = 0xffff0087;
        const msg_id_t MeanCollisionAlert                       = 0xffff0088;
        const msg_id_t ViewerFrozenMessage                      = 0xffff0089;
        const msg_id_t HealthMessage                            = 0xffff008a;
        const msg_id_t ChatFromSimulator                        = 0xffff008b;
        const msg_id_t SimStats                                 = 0xffff008c;
        const msg_id_t RequestRegionInfo                        = 0xffff008d;
        const msg_id_t RegionInfo                               = 0xffff008e;
        const msg_id_t GodUpdateRegionInfo                      = 0xffff008f;
        const msg_id_t NearestLandingRegionRequest              = 0xffff0090;
        const msg_id_t NearestLandingRegionReply                = 0xffff0091;
        const msg_id_t NearestLandingRegionUpdated              = 0xffff0092;
        const msg_id_t TeleportLandingStatusChanged             = 0xffff0093;
        const msg_id_t RegionHandshake                          = 0xffff0094;
        const msg_id_t RegionHandshakeReply                     = 0xffff0095;
        const msg_id_t SimulatorViewerTimeMessage               = 0xffff0096;
        const msg_id_t EnableSimulator                          = 0xffff0097;
        const msg_id_t DisableSimulator                         = 0xffff0098;
        const msg_id_t TransferRequest                          = 0xffff0099;
        const msg_id_t TransferInfo                             = 0xffff009a;
        const msg_id_t TransferAbort                            = 0xffff009b;
        const msg_id_t RequestXfer                              = 0xffff009c;
        const msg_id_t AbortXfer                                = 0xffff009d;
        const msg_id_t AvatarAppearance                         = 0xffff009e;
        const msg_id_t SetFollowCamProperties                   = 0xffff009f;
        const msg_id_t ClearFollowCamProperties                 = 0xffff00a0;
        const msg_id_t RequestPayPrice                          = 0xffff00a1;
        const msg_id_t PayPriceReply                            = 0xffff00a2;
        const msg_id_t KickUser                                 = 0xffff00a3;
        const msg_id_t KickUserAck                              = 0xffff00a4;
        const msg_id_t GodKickUser                              = 0xffff00a5;
        const msg_id_t SystemKickUser                           = 0xffff00a6;
        const msg_id_t EjectUser                                = 0xffff00a7;
        const msg_id_t FreezeUser                               = 0xffff00a8;
        const msg_id_t AvatarPropertiesRequest                  = 0xffff00a9;
        const msg_id_t AvatarPropertiesRequestBackend           = 0xffff00aa;
        const msg_id_t AvatarPropertiesReply                    = 0xffff00ab;
        const msg_id_t AvatarInterestsReply                     = 0xffff00ac;
        const msg_id_t AvatarGroupsReply                        = 0xffff00ad;
        const msg_id_t AvatarPropertiesUpdate                   = 0xffff00ae;
        const msg_id_t AvatarInterestsUpdate                    = 0xffff00af;
        const msg_id_t AvatarNotesReply                         = 0xffff00b0;
        const msg_id_t AvatarNotesUpdate                        = 0xffff00b1;
        const msg_id_t AvatarPicksReply                         = 0xffff00b2;
        const msg_id_t EventInfoRequest                         = 0xffff00b3;
        const msg_id_t EventInfoReply                           = 0xffff00b4;
        const msg_id_t EventNotificationAddRequest              = 0xffff00b5;
        const msg_id_t EventNotificationRemoveRequest           = 0xffff00b6;
        const msg_id_t EventGodDelete                           = 0xffff00b7;
        const msg_id_t PickInfoReply                            = 0xffff00b8;
        const msg_id_t PickInfoUpdate                           = 0xffff00b9;
        const msg_id_t PickDelete                               = 0xffff00ba;
        const msg_id_t PickGodDelete                            = 0xffff00bb;
        const msg_id_t ScriptQuestion                           = 0xffff00bc;
        const msg_id_t ScriptControlChange                      = 0xffff00bd;
        const msg_id_t ScriptDialog                             = 0xffff00be;
        const msg_id_t ScriptDialogReply                        = 0xffff00bf;
        const msg_id_t ForceScriptControlRelease                = 0xffff00c0;
        const msg_id_t RevokePermissions                        = 0xffff00c1;
        const msg_id_t LoadURL                                  = 0xffff00c2;
        const msg_id_t ScriptTeleportRequest                    = 0xffff00c3;
        const msg_id_t ParcelOverlay                            = 0xffff00c4;
        const msg_id_t ParcelPropertiesRequestByID              = 0xffff00c5;
        const msg_id_t ParcelPropertiesUpdate                   = 0xffff00c6;
        const msg_id_t ParcelReturnObjects                      = 0xffff00c7;
        const msg_id_t ParcelSetOtherCleanTime                  = 0xffff00c8;
        const msg_id_t ParcelDisableObjects                     = 0xffff00c9;
        const msg_id_t ParcelSelectObjects                      = 0xffff00ca;
        const msg_id_t EstateCovenantRequest                    = 0xffff00cb;
        const msg_id_t EstateCovenantReply                      = 0xffff00cc;
        const msg_id_t ForceObjectSelect                        = 0xffff00cd;
        const msg_id_t ParcelBuyPass                            = 0xffff00ce;
        const msg_id_t ParcelDeedToGroup                        = 0xffff00cf;
        const msg_id_t ParcelReclaim                            = 0xffff00d0;
        const msg_id_t ParcelClaim                              = 0xffff00d1;
        const msg_id_t ParcelJoin                               = 0xffff00d2;
        const msg_id_t ParcelDivide                             = 0xffff00d3;
        const msg_id_t ParcelRelease                            = 0xffff00d4;
        const msg_id_t ParcelBuy                                = 0xffff00d5;
        const msg_id_t ParcelGodForceOwner                      = 0xffff00d6;
        const msg_id_t ParcelAccessListRequest                  = 0xffff00d7;
        const msg_id_t ParcelAccessListReply                    = 0xffff00d8;
        const msg_id_t ParcelAccessListUpdate                   = 0xffff00d9;
        const msg_id_t ParcelDwellRequest                       = 0xffff00da;
        const msg_id_t ParcelDwellReply                         = 0xffff00db;
        const msg_id_t RequestParcelTransfer                    = 0xffff00dc;
        const msg_id_t UpdateParcel                             = 0xffff00dd;
        const msg_id_t RemoveParcel                             = 0xffff00de;
        const msg_id_t MergeParcel                              = 0xffff00df;
        const msg_id_t LogParcelChanges                         = 0xffff00e0;
        const msg_id_t CheckParcelSales                         = 0xffff00e1;
        const msg_id_t ParcelSales                              = 0xffff00e2;
        const msg_id_t ParcelGodMarkAsContent                   = 0xffff00e3;
        const msg_id_t ViewerStartAuction                       = 0xffff00e4;
        const msg_id_t StartAuction                             = 0xffff00e5;
        const msg_id_t ConfirmAuctionStart                      = 0xffff00e6;
        const msg_id_t CompleteAuction                          = 0xffff00e7;
        const msg_id_t CancelAuction                            = 0xffff00e8;
        const msg_id_t CheckParcelAuctions                      = 0xffff00e9;
        const msg_id_t ParcelAuctions                           = 0xffff00ea;
        const msg_id_t UUIDNameRequest                          = 0xffff00eb;
        const msg_id_t UUIDNameReply                            = 0xffff00ec;
        const msg_id_t UUIDGroupNameRequest                     = 0xffff00ed;
        const msg_id_t UUIDGroupNameReply                       = 0xffff00ee;
        const msg_id_t ChatPass                                 = 0xffff00ef;
        const msg_id_t ChildAgentDying                          = 0xffff00f0;
        const msg_id_t ChildAgentUnknown                        = 0xffff00f1;
        const msg_id_t KillChildAgents                          = 0xffff00f2;
        const msg_id_t GetScriptRunning                         = 0xffff00f3;
        const msg_id_t ScriptRunningReply                       = 0xffff00f4;
        const msg_id_t SetScriptRunning                         = 0xffff00f5;
        const msg_id_t ScriptReset                              = 0xffff00f6;
        const msg_id_t ScriptSensorRequest                      = 0xffff00f7;
        const msg_id_t ScriptSensorReply                        = 0xffff00f8;
        const msg_id_t CompleteAgentMovement                    = 0xffff00f9;
        const msg_id_t AgentMovementComplete                    = 0xffff00fa;
        const msg_id_t DataServerLogout                         = 0xffff00fb;
        const msg_id_t LogoutRequest                            = 0xffff00fc;
        const msg_id_t LogoutReply                              = 0xffff00fd;
        const msg_id_t ImprovedInstantMessage                   = 0xffff00fe;
        const msg_id_t RetrieveInstantMessages                  = 0xffff00ff;
        const msg_id_t FindAgent                                = 0xffff0100;
        const msg_id_t RequestGodlikePowers                     = 0xffff0101;
        const msg_id_t GrantGodlikePowers                       = 0xffff0102;
        const msg_id_t GodlikeMessage                           = 0xffff0103;
        const msg_id_t EstateOwnerMessage                       = 0xffff0104;
        const msg_id_t GenericMessage                           = 0xffff0105;
        const msg_id_t MuteListRequest                          = 0xffff0106;
        const msg_id_t UpdateMuteListEntry                      = 0xffff0107;
        const msg_id_t RemoveMuteListEntry                      = 0xffff0108;
        const msg_id_t CopyInventoryFromNotecard                = 0xffff0109;
        const msg_id_t UpdateInventoryItem                      = 0xffff010a;
        const msg_id_t UpdateCreateInventoryItem                = 0xffff010b;
        const msg_id_t MoveInventoryItem                        = 0xffff010c;
        const msg_id_t CopyInventoryItem                        = 0xffff010d;
        const msg_id_t RemoveInventoryItem                      = 0xffff010e;
        const msg_id_t ChangeInventoryItemFlags                 = 0xffff010f;
        const msg_id_t SaveAssetIntoInventory                   = 0xffff0110;
        const msg_id_t CreateInventoryFolder                    = 0xffff0111;
        const msg_id_t UpdateInventoryFolder                    = 0xffff0112;
        const msg_id_t MoveInventoryFolder                      = 0xffff0113;
        const msg_id_t RemoveInventoryFolder                    = 0xffff0114;
        const msg_id_t FetchInventoryDescendents                = 0xffff0115;
        const msg_id_t InventoryDescendents                     = 0xffff0116;
        const msg_id_t FetchInventory                           = 0xffff0117;
        const msg_id_t FetchInventoryReply                      = 0xffff0118;
        const msg_id_t BulkUpdateInventory                      = 0xffff0119;
        const msg_id_t RequestInventoryAsset                    = 0xffff011a;
        const msg_id_t InventoryAssetResponse                   = 0xffff011b;
        const msg_id_t RemoveInventoryObjects                   = 0xffff011c;
        const msg_id_t PurgeInventoryDescendents                = 0xffff011d;
        const msg_id_t UpdateTaskInventory                      = 0xffff011e;
        const msg_id_t RemoveTaskInventory                      = 0xffff011f;
        const msg_id_t MoveTaskInventory                        = 0xffff0120;
        const msg_id_t RequestTaskInventory                     = 0xffff0121;
        const msg_id_t ReplyTaskInventory                       = 0xffff0122;
        const msg_id_t DeRezObject                              = 0xffff0123;
        const msg_id_t DeRezAck                                 = 0xffff0124;
        const msg_id_t RezObject                                = 0xffff0125;
        const msg_id_t RezObjectFromNotecard                    = 0xffff0126;
        const msg_id_t TransferInventory                        = 0xffff0127;
        const msg_id_t TransferInventoryAck                     = 0xffff0128;
        const msg_id_t AcceptFriendship                         = 0xffff0129;
        const msg_id_t DeclineFriendship                        = 0xffff012a;
        const msg_id_t FormFriendship                           = 0xffff012b;
        const msg_id_t TerminateFriendship                      = 0xffff012c;
        const msg_id_t OfferCallingCard                         = 0xffff012d;
        const msg_id_t AcceptCallingCard                        = 0xffff012e;
        const msg_id_t DeclineCallingCard                       = 0xffff012f;
        const msg_id_t RezScript                                = 0xffff0130;
        const msg_id_t CreateInventoryItem                      = 0xffff0131;
        const msg_id_t CreateLandmarkForEvent                   = 0xffff0132;
        const msg_id_t EventLocationRequest                     = 0xffff0133;
        const msg_id_t EventLocationReply                       = 0xffff0134;
        const msg_id_t RegionHandleRequest                      = 0xffff0135;
        const msg_id_t RegionIDAndHandleReply                   = 0xffff0136;
        const msg_id_t MoneyTransferRequest                     = 0xffff0137;
        const msg_id_t MoneyTransferBackend                     = 0xffff0138;
        const msg_id_t MoneyBalanceRequest                      = 0xffff0139;
        const msg_id_t MoneyBalanceReply                        = 0xffff013a;
        const msg_id_t RoutedMoneyBalanceReply                  = 0xffff013b;
        const msg_id_t ActivateGestures                         = 0xffff013c;
        const msg_id_t DeactivateGestures                       = 0xffff013d;
        const msg_id_t MuteListUpdate                           = 0xffff013e;
        const msg_id_t UseCachedMuteList                        = 0xffff013f;
        const msg_id_t GrantUserRights                          = 0xffff0140;
        const msg_id_t ChangeUserRights                         = 0xffff0141;
        const msg_id_t OnlineNotification                       = 0xffff0142;
        const msg_id_t OfflineNotification                      = 0xffff0143;
        const msg_id_t SetStartLocationRequest                  = 0xffff0144;
        const msg_id_t SetStartLocation                         = 0xffff0145;
        const msg_id_t NetTest                                  = 0xffff0146;
        const msg_id_t SetCPURatio                              = 0xffff0147;
        const msg_id_t SimCrashed                               = 0xffff0148;
        const msg_id_t NameValuePair                            = 0xffff0149;
        const msg_id_t RemoveNameValuePair                      = 0xffff014a;
        const msg_id_t UpdateAttachment                         = 0xffff014b;
        const msg_id_t RemoveAttachment                         = 0xffff014c;
        const msg_id_t AssetUploadRequest                       = 0xffff014d;
        const msg_id_t AssetUploadComplete                      = 0xffff014e;
        const msg_id_t EmailMessageRequest                      = 0xffff014f;
        const msg_id_t EmailMessageReply                        = 0xffff0150;
        const msg_id_t ScriptDataRequest                        = 0xffff0151;
        const msg_id_t ScriptDataReply                          = 0xffff0152;
        const msg_id_t CreateGroupRequest                       = 0xffff0153;
        const msg_id_t CreateGroupReply                         = 0xffff0154;
        const msg_id_t UpdateGroupInfo                          = 0xffff0155;
        const msg_id_t GroupRoleChanges                         = 0xffff0156;
        const msg_id_t JoinGroupRequest                         = 0xffff0157;
        const msg_id_t JoinGroupReply                           = 0xffff0158;
        const msg_id_t EjectGroupMemberRequest                  = 0xffff0159;
        const msg_id_t EjectGroupMemberReply                    = 0xffff015a;
        const msg_id_t LeaveGroupRequest                        = 0xffff015b;
        const msg_id_t LeaveGroupReply                          = 0xffff015c;
        const msg_id_t InviteGroupRequest                       = 0xffff015d;
        const msg_id_t InviteGroupResponse                      = 0xffff015e;
        const msg_id_t GroupProfileRequest                      = 0xffff015f;
        const msg_id_t GroupProfileReply                        = 0xffff0160;
        const msg_id_t GroupAccountSummaryRequest               = 0xffff0161;
        const msg_id_t GroupAccountSummaryReply                 = 0xffff0162;
        const msg_id_t GroupAccountDetailsRequest               = 0xffff0163;
        const msg_id_t GroupAccountDetailsReply                 = 0xffff0164;
        const msg_id_t GroupAccountTransactionsRequest          = 0xffff0165;
        const msg_id_t GroupAccountTransactionsReply            = 0xffff0166;
        const msg_id_t GroupActiveProposalsRequest              = 0xffff0167;
        const msg_id_t GroupActiveProposalItemReply             = 0xffff0168;
        const msg_id_t GroupVoteHistoryRequest                  = 0xffff0169;
        const msg_id_t GroupVoteHistoryItemReply                = 0xffff016a;
        const msg_id_t StartGroupProposal                       = 0xffff016b;
        const msg_id_t GroupProposalBallot                      = 0xffff016c;
        const msg_id_t TallyVotes                               = 0xffff016d;
        const msg_id_t GroupMembersRequest                      = 0xffff016e;
        const msg_id_t GroupMembersReply                        = 0xffff016f;
        const msg_id_t ActivateGroup                            = 0xffff0170;
        const msg_id_t SetGroupContribution                     = 0xffff0171;
        const msg_id_t SetGroupAcceptNotices                    = 0xffff0172;
        const msg_id_t GroupRoleDataRequest                     = 0xffff0173;
        const msg_id_t GroupRoleDataReply                       = 0xffff0174;
        const msg_id_t GroupRoleMembersRequest                  = 0xffff0175;
        const msg_id_t GroupRoleMembersReply                    = 0xffff0176;
        const msg_id_t GroupTitlesRequest                       = 0xffff0177;
        const msg_id_t GroupTitlesReply                         = 0xffff0178;
        const msg_id_t GroupTitleUpdate                         = 0xffff0179;
        const msg_id_t GroupRoleUpdate                          = 0xffff017a;
        const msg_id_t LiveHelpGroupRequest                     = 0xffff017b;
        const msg_id_t LiveHelpGroupReply                       = 0xffff017c;
        const msg_id_t AgentWearablesRequest                    = 0xffff017d;
        const msg_id_t AgentWearablesUpdate                     = 0xffff017e;
        const msg_id_t AgentIsNowWearing                        = 0xffff017f;
        const msg_id_t AgentCachedTexture                       = 0xffff0180;
        const msg_id_t AgentCachedTextureResponse               = 0xffff0181;
        const msg_id_t AgentDataUpdateRequest                   = 0xffff0182;
        const msg_id_t AgentDataUpdate                          = 0xffff0183;
        const msg_id_t GroupDataUpdate                          = 0xffff0184;
        const msg_id_t AgentGroupDataUpdate                     = 0xffff0185;
        const msg_id_t AgentDropGroup                           = 0xffff0186;
        const msg_id_t LogTextMessage                           = 0xffff0187;
        const msg_id_t CreateTrustedCircuit                     = 0xffff0188;
        const msg_id_t DenyTrustedCircuit                       = 0xffff0189;
        const msg_id_t RequestTrustedCircuit                    = 0xffff018a;
        const msg_id_t RezSingleAttachmentFromInv               = 0xffff018b;
        const msg_id_t RezMultipleAttachmentsFromInv            = 0xffff018c;
        const msg_id_t DetachAttachmentIntoInv                  = 0xffff018d;
        const msg_id_t CreateNewOutfitAttachments               = 0xffff018e;
        const msg_id_t UserInfoRequest                          = 0xffff018f;
        const msg_id_t UserInfoReply                            = 0xffff0190;
        const msg_id_t UpdateUserInfo                           = 0xffff0191;
        const msg_id_t ParcelRename                             = 0xffff0192;
        const msg_id_t InitiateDownload                         = 0xffff0193;
        const msg_id_t SystemMessage                            = 0xffff0194;
        const msg_id_t MapLayerRequest                          = 0xffff0195;
        const msg_id_t MapLayerReply                            = 0xffff0196;
        const msg_id_t MapBlockRequest                          = 0xffff0197;
        const msg_id_t MapNameRequest                           = 0xffff0198;
        const msg_id_t MapBlockReply                            = 0xffff0199;
        const msg_id_t MapItemRequest                           = 0xffff019a;
        const msg_id_t MapItemReply                             = 0xffff019b;
        const msg_id_t SendPostcard                             = 0xffff019c;
        const msg_id_t RpcChannelRequest                        = 0xffff019d;
        const msg_id_t RpcChannelReply                          = 0xffff019e;
        const msg_id_t RpcScriptRequestInbound                  = 0xffff019f;
        const msg_id_t RpcScriptRequestInboundForward           = 0xffff01a0;
        const msg_id_t RpcScriptReplyInbound                    = 0xffff01a1;
        const msg_id_t ScriptMailRegistration                   = 0xffff01a2;
        const msg_id_t ParcelMediaCommandMessage                = 0xffff01a3;
        const msg_id_t ParcelMediaUpdate                        = 0xffff01a4;
        const msg_id_t LandStatRequest                          = 0xffff01a5;
        const msg_id_t LandStatReply                            = 0xffff01a6;
        const msg_id_t Error                                    = 0xffff01a7;
        const msg_id_t ObjectIncludeInSearch                    = 0xffff01a8;
        const msg_id_t RexImageInfo                             = 0xffff2710;
        const msg_id_t RexSkyboxInfo                            = 0xffff2711;
        const msg_id_t PacketAck                                = 0xfffffffb;
        const msg_id_t OpenCircuit                              = 0xfffffffc;
        const msg_id_t CloseCircuit                             = 0xfffffffd;

        typedef std::set <msg_id_t> MessageIDSet;
        typedef std::map <string, msg_id_t> MessageIDMap;
        typedef std::map <msg_id_t, string> MessageNameMap;

        MessageIDMap get_msg_id_map ();
        MessageNameMap get_msg_name_map ();
    }
}

#endif
