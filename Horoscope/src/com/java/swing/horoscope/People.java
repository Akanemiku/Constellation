package com.java.swing.horoscope;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.SwingConstants;

public class People {

	private boolean sex = false;
	private String date = null;
	private int month = 0;
	private int day = 0;
	Datas data;

	public int birthday() {
		this.month = Integer.parseInt(getDate().substring(5, 7));
		this.day = Integer.parseInt(getDate().substring(8, 10));
		data = new Datas(month, day);
		return data.getMark();
	}

	public Datas EZ(int a) {
		return data;
	}

	public boolean isSex() {
		return sex;
	}

	public void setSex(boolean sex) {
		this.sex = sex;
	}

	public String getDate() {
		return date;
	}

	public void setDate(String date) {
		this.date = date;
	}

	public int getMonth() {
		return month;
	}

	public void setMonth(int month) {
		this.month = month;
	}

	public int getDay() {
		return day;
	}

	public void setDay(int day) {
		this.day = day;
	}

}
