#ifndef ENETPP_SERVER_QUEUED_PACKET_H_
#define ENETPP_SERVER_QUEUED_PACKET_H_

#include "enet/enet.h"

namespace enetpp {

	class server_queued_packet {
	public:
		enet_uint8 _channel_id;
		ENetPacket* _packet;
		unsigned int _client_uid;

	public:
		server_queued_packet()
			: _channel_id(0)
			, _packet(nullptr) 
			, _client_uid(0) {
		}

		server_queued_packet(enet_uint8 channel_id, ENetPacket* packet, unsigned int client_uid)
			: _channel_id(channel_id)
			, _packet(packet) 
			, _client_uid(client_uid) {
		}
	};

}

#endif