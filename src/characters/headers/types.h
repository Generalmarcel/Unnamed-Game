#pragma once

struct types
{
	enum ship {
		bb = 0x1,
		bc,
		ca,
		cl,
		cv,
		cva,
		cvan,
		cvb,
		cve,
		cvl,
		cvn,
		cvs,
		dd,
		ss,
		ssb,
		ssbn,
		ssn
	};

	enum tank
	{
		lt = 0xF1,
		mt,
		ht,
		td
	};

	enum plane {
		fp = 0xFF1,
		db,
		tb,
		sp
	};
};

namespace to {
	std::string asShip(types::ship _ship) {
		switch (_ship)
		{
		case types::bb:
			return "Battleship";
			break;
		case types::bc:
			return "Battlecruiser";
			break;
		case types::ca:
			return "Heavy Cruiser";
			break;
		case types::cl:
			return "Light Cruiser";
			break;
		case types::cv:
			return "Aircraft Carrier";
			break;
		case types::cva:
			return "Attack Aircraft Carrier";
			break;
		case types::cvan:
			return "Nuclear-Powered Attack Aircraft Carrier";
			break;
		case types::cvb:
			return "Heavy Aircraft Carrier";
			break;
		case types::cve:
			return "Escort Aircraft Carrier";
			break;
		case types::cvl:
			return "Light Aircraft Carrier";
			break;
		case types::cvn:
			return "Nuclear-Powered Aircraft Carrier";
			break;
		case types::cvs:
			return "Anti-Submarine Aircraft Carrier";
			break;
		case types::dd:
			return "Destroyer";
			break;
		case types::ss:
			return "Submarine";
			break;
		case types::ssb:
			return "Ballistic Submarine";
			break;
		case types::ssbn:
			return "Nuclear-Powered Ballistic Submarine";
			break;
		case types::ssn:
			return "Nuclear-Powered Aircraft Carrier";
			break;
		default:
			break;
		}
	}

	std::string asTank(types::tank _tank) {
		switch (_tank)
		{
		case types::lt:
			return "Light Tank";
			break;
		case types::mt:
			return "Medium Tank";
			break;
		case types::ht:
			return "Heavy Tank";
			break;
		case types::td:
			return "Tank-Destroyer";
			break;
		default:
			break;
		}
	}

	std::string asPlane(types::plane _plane) {
		switch (_plane)
		{
		case types::fp:
			return "Fighter";
			break;
		case types::db:
			return "Dive Bomber";
			break;
		case types::tb:
			return "Torpedo Bomber";
			break;
		case types::sp:
			return "Spotter";
			break;
		default:
			break;
		}
	}
}
